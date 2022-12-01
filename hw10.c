#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct city {
char name[100];
char country[100];
int population;
}member[3];

int main()
{
for (int i = 0; i < 3; i++)
{
    printf("Name> ");
    scanf("%s", member[i].name);
    printf("Country> ");
    scanf("%s", member[i].country);
    printf("Population> ");
    scanf("%d", &member[i].population);
}

printf("Printing the three cities: \n");
for (int i = 0; i < 3; i++)
{
printf("%s in %s with a population of %d people\n", member[i].name, member[i].country, member[i].population);
}
}
