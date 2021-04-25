#include<stdio.h>
main()
{
	int a[3][3];
	int i=0,j=0;
	int sum=0;
	printf("\nEnter the 3x3 matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nElements - [%d],[%d] : ",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	printf("\nThe matrix is: \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		if((i==j)||((i+j)==2))
		sum=sum+a[i][j];
		}
	}
	printf("\nThe sum of the diagonals are: %d", sum);
	
}
