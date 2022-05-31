#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{

	char arr[] = "hello";
	char arr2[] = "abc";
	char arr3p[] = { 'a','b','c','\0'};
	printf("%s\n ", arr);
	printf("%s\n", arr2);
	int len = strlen("abc");
	printf("abc有几个数 = %d\n", strlen(arr2));
	printf("a b c有几个数 = %d\n", strlen(arr3p));



	return 0;
}