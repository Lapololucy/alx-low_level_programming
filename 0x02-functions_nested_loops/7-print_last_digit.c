#include "main.h"

/**
 * print_last_digit - will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * description: will print the last digit of a given number. if the 
 * number is a negative the value will return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 10)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}

