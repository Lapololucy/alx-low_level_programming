#include "main.h"
/**
 * print_rev -> a function to print a string in reverse
 * @s: the value to process to the stdout in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	while (i--)
		_putchar(*(s + i));
	_putchar('\n');
}

