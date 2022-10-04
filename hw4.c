#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, c;

	printf("Please enter a number:");
	scanf("%d", &n);
	for (c = 2; c < n; c++)
	{
		if (n % c == 0)
		{
			printf("It is a not prime number");
			return 0;
		}
	
	}
	printf("It is a prime number");

		return 0;
	
}
