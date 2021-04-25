#include <stdio.h>
int Min(int num1, int num2)
{
	return num1 >= num2
			? num2
			: num1;
}
int LCMUtil(int num1, int num2, int k)
{
	if (num1 == 1 || num2 == 1)
		return num1 * num2;
	if (num1 == num2)
		return num1;
	if (k <= Min(num1, num2)) 
	{
		if (num1 % k == 0 && num2 % k == 0) 
		{
			return k * LCMUtil(
						num1 / k, num2 / k, 2);
		}
		else
			return LCMUtil(num1, num2, k + 1);
	}
	else
		return num1 * num2;
}
void LCM(int N, int M)
{
	int lcm = LCMUtil(N, M, 2);
	printf("%d", lcm);
}
int main()
{
	int N, M;
	printf("Enter N: ");
	scanf("%d", &N);
	printf("Enter M: ");
	scanf("%d", &M);
	LCM(N, M);
	return 0;
}

