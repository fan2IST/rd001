#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}//创建一个函数
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);

	int sum = ADD(num1, num2);
	printf("%d\n", sum);

}
