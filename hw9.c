#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	const int dif = 'a' - 'A';
	char str[70];
	int len;
	printf("input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("output> ");
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("%c",str[i] + dif);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			printf("%c", str[i] - dif);
		}
		else
		{
			printf("%c", str[i]);
		}
	}
	return 0;

}