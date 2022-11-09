#include <stdio.h>
#define N 6

void swap_array(int x[], int y[])
{
	int i, temp;
	for (i = 0; i < N; i++)
	{
		temp = x[i];
		x[i] = y[i];
		y[i] = temp;
	}
}

void Print(int x[])
{
	int i;
	for (i = 0; i < N; i++)
		printf("%2d ", x[i]);
	printf("\n");
}

int main()
{
	int a[N] = { 1, 2, 3, 4, 5, 6 };
	int b[N] = { 7, 8, 9, 10, 11, 12 };
  
	printf("arr1: "); Print(a);
	printf("arr2: "); Print(b);

	swap_array(a, b);

	printf("\nafter swap\n");
	printf("arr1: "); Print(a);
	printf("arr2: "); Print(b);

	return 0;
}

