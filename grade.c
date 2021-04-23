#include<stdio.h>
main()
{
	int n;
	printf("Enter marks");
	scanf("%d",&n);
	if(n>=85)
	{
		printf("Grade A");
	}
	else if(n<85&&n>=70)
	{
		printf("Grade B");
	}
	else if(n<70&&n>=55)
	{
		printf("Grade C");	
	}
	else if(n<55&&n>=40)
	{
		printf("Grade D");	
	}
	else if(n<40)
	{
		printf("Grade F");
	}
	return 0;
}
