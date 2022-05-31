#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100000

enum Sex
{
	MALE = 3,//赋初值[最初的值]
	FEMALE,
	SECRET,
	TEST

};
int main()
{
	/*3.14
	10
	a
	abcdef这些的都是常量*/
	const int num = MAX;//常量，之后不可重复被定义,num→常变量【具有常属性但是是变量】
	//int arr2[num] = {0}不可行，num是变量

	printf("测试 = %d\n", num);

	enum Sex S = MALE;

	printf("测试 = %d\n", MALE);
	printf("测试 = %d\n", FEMALE);
	printf("测试 = %d\n", SECRET);
	printf("测试 = %d\n", TEST);




	return 0;

};