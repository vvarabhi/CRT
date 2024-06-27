#include<stdio.h>
int main()
{
	int a=5, b=7;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\n",a);
	printf("%d\n",b);
	a=~a+1;
	printf("%d\n
	",a);
	return 0;
	
	
	
	}
