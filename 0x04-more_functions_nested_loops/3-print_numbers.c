#include "main.h"

/**
 * print_numbers - prints 0 to 9.
 * Rturn: always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}

