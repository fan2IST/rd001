#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, f, e;
	scanf("%d", &a);
	b = a / 100;//��λ   
	c = a - (b * 100);//��2λ
	d = c / 10;//ʮλ
	f = a - (b * 100 + d * 10);//��λ
	e = f * 100 + d * 10 + b;//�ߺ�
	printf("%d\n", e);
	return 0;
}