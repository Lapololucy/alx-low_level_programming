#include "main.h"

/**
 * print_line - print a line of a give length.
 * @n: length of the line
 *
 *
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

