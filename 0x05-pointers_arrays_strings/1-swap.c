#include "main.h"

/**
 * swap_int -> given two integers swap the values they are holding
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

