#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100000

enum Sex
{
	MALE = 3,//����ֵ[�����ֵ]
	FEMALE,
	SECRET,
	TEST

};
int main()
{
	/*3.14
	10
	a
	abcdef��Щ�Ķ��ǳ���*/
	const int num = MAX;//������֮�󲻿��ظ�������,num�������������г����Ե����Ǳ�����
	//int arr2[num] = {0}�����У�num�Ǳ���

	printf("���� = %d\n", num);

	enum Sex S = MALE;

	printf("���� = %d\n", MALE);
	printf("���� = %d\n", FEMALE);
	printf("���� = %d\n", SECRET);
	printf("���� = %d\n", TEST);




	return 0;

};