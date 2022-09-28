# include <stdio.h>
int main(void)
{
	int i, k;
	for (int i = 1; i <= 5; i++)
	{
		for (int k = 1; k <= 5 - i; k++){printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}