#include<stdio.h>
main()
{
	int a=30, b=35;
	printf("Before swap: a=%d b=%d", a,b); 
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap: a=%d b=%d", a,b);
	}
