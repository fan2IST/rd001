#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int test = 2021;
int main()
{
	printf("1:%d\n", test);
	printf("wuhu\n");
	{
		printf("2:%d\n", test);

		int a = 10;
		printf("a= %d\n", a);//只在这一范围内作用

	}
	printf("3:%d\n", test);
		return 0;

}