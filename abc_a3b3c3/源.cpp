#define _CRT_SECURE_NO_WARNINGS 1
int a=100;
#include<stdio.h>
int b, c, d , e;
int main()
{
	while (a > 99 && a < 999)
  {
		a++;
		b = a / 100;
		c = (a % 100)/10;
		d = (a % 100) % 10;
		e = (b * b * b) + (c * c * c) + (d * d * d);
	if (a != e)
	{
		
	}
	else {
        
		printf("%d",a);
		break;
        	}

   }





}
