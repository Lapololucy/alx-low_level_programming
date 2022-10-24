#include "main.h"
#include <stdio.h>

/**
 * print_array -> a function that prints an array a number
 * @a: an array
 * @n: the number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(",");
	}
	printf("\n");
}

