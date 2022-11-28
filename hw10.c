#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct
{
    char name[50];
    char country[50];
    char population[50];

}Cities;

int main(void)
{
    Cities city[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Name> ");
        scanf(" %[^\n]s", &city[i].name);
        printf("Contry> ");
        scanf(" %[^\n]s", &city[i].country);
        printf("Population> ");
        scanf(" %d", &city[i].population);
    }
    printf("\nPrinting the three cities: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, city[i].name, city[i].country, city[i].population);
    }

    return 0;
}