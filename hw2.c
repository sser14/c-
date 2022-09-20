#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double km;
	printf("please enter kilometers: ");
	scanf("%lf", &km);
	printf("%.1f km is equal to %.1f miles. ", km, (1 / 1.609) * km);

}