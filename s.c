#include<stdio.h>
int main()
{
	int a=5, b=7;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d",a);
	printf("%d",b);
	a=~a+1;
	printf("%d",a);
	return 0;
	
	
	
	}