#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard(int* ptr)
{
	double a = 0;
	double s = 0;
	for (int i = 0; i < 5; i++)
	{
		a += ptr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		s += pow(ptr[i] - a/5, 2.0);
	}
	return sqrt(s / 5);
}
int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Standard Deviation = %.3f", standard(arr));

}