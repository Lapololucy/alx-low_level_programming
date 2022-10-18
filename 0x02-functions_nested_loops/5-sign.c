#include "main.h"
/**
 * print_sign - prints the sign of a given number +/-
 * @n: Number to be tested
 *
 *
 * Return: 1 if positive and greater than zero, 0 if is zero, and -1 if is neg.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

