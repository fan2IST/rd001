#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)//1000-2000��֮������
	{
		//��4���������ܱ�100����
		//�ܱ�400����������
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))//xx����y%100���ܵ���0  ||   xx
		{
			printf("%d ",y);
				count++;//�ж��ٸ�
		}
		

	}
    printf("\ncount = %d\n",count);
	return 0;
}