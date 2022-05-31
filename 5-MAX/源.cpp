#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a=0, b=0, c=0, d=0, e=0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int i=0;
	int arr[5] = {a, b, c, d, e};
	for(i=0;i<5;i++)
	{
		if(arr[i] <= arr[i+1])
		{
			arr[1]=arr[i+1];
		}
		
		
	}

	printf("%d\n", arr[1]);

   //printf("max=%d", a);
	return 0;
}