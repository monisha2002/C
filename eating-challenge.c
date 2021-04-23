#include<stdio.h>
main()
{
	int n;
	printf("Menu\n");
	printf("1.Pasta, Rs 179\n");
	printf("2. Sandwich, Rs 149\n");
	printf("3. Pizza, Rs 239\n");
	printf("4. Burger, Rs 129\n");
	printf("5. French Fries, Rs 99\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Food Item- Pasta \n");
			printf("Price- Rs 179\n");
			break;
		case 2:
			printf("Food Item- Sandwich \n");
			printf("Price- Rs 149");
			break;
		case 3:
			printf("Food Item- Pizza \nPrice- Rs 239");
			break;
		case 4:
			printf("Food Item- Burger \nPrice- Rs 129");
			break;
		case 5: 
			printf("Food Item- French Fries \nPrice- Rs 99");
			break;
		default:
			printf("Wrong Choice");
	}
	return 0;
}
