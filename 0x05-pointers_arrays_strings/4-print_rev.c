#include "main.h"
/**
 * print_rev -> a function to print a stdout in reverse
 * @s: the value to process to the stdout in reverse
 */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}

