#include "main.h"

/**
 * print _most_numbers - print 0 to 9 excluding 2 and 4
 *
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}

