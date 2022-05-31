#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <windows.h>
//GetStdHandle和SetConsoleTextAttribute在头文件windows.h中
#include <tchar.h>
void color(short x) {
    if (x >= 0 && x <= 15)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
}
float f(float x, float y, float z) {
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}

int main() {
    color(12);
    HANDLE hdl = GetStdHandle(STD_OUTPUT_HANDLE);  //实例化句柄 hdl
    _TCHAR buffer[25][80] = { _T(' ') };
    _TCHAR ramp[] = _T(".:-=+*#%@");  //ramp 是蔓延，渐步的意思

    for (float t = 0.0f;; t += 0.1f) {
        int sy = 0;
        float s = sinf(t);
        //sin()的参数是double 型的，sinf()的参数是float 型的
        //math.h中提供的三角函数，都是使用弧度表示法，而不是角度表示法
        //即，180度 = π ≈3.1415926 
        float a = s * s * s * s * 0.2f;
        for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
            _TCHAR* p = &buffer[sy++][0];
            float tz = z * (1.2f - a);
            for (float x = -1.5f; x < 1.5f; x += 0.05f) {
                float tx = x * (1.2f + a);
                float v = f(tx, 0.0f, tz);
                if (v <= 0.0f) {
                    float y0 = h(tx, tz);
                    float ny = 0.01f;
                    float nx = h(tx + ny, tz) - y0;
                    float nz = h(tx, tz + ny) - y0;
                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                    *p++ = ramp[(int)(d * 5.0f)];
                }
                else
                    *p++ = ' ';
            }
        }

        for (sy = 0; sy < 25; sy++) {
            COORD pos = { 0, sy };
            //COORD是Windows API中定义的一种结构
            //表示一个字符在控制台屏幕上的坐标
            SetConsoleCursorPosition(hdl, pos);
            WriteConsole(hdl, buffer[sy], 79, NULL, 0);
        }
        Sleep(22);
    }
}