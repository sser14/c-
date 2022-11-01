#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	printf("Please input five integers:");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("Odd numbers:");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 != 0)
		{
			printf("%d ", num[i]);
		}
	}
	printf(" \n");
	printf("Even numbers:");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}