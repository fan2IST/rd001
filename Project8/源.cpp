#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, f, e;
	scanf("%d", &a);
	b = a / 100;//百位   
	c = a - (b * 100);//后2位
	d = c / 10;//十位
	f = a - (b * 100 + d * 10);//个位
	e = f * 100 + d * 10 + b;//芜湖
	printf("%d\n", e);
	return 0;
}