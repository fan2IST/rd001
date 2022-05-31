#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)//1000-2000年之间的年份
	{
		//被4整除，不能被100整除
		//能被400整除是闰年
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))//xx并且y%100不能等于0  ||   xx
		{
			printf("%d ",y);
				count++;//有多少个
		}
		

	}
    printf("\ncount = %d\n",count);
	return 0;
}