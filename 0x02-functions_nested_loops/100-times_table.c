#include "main.h"

/**
 * print_thousand - print out the digit in the thousand spot
 * @sum: value to scan for thousand spot
 *
 * Return: void
 */
static void print_thousand(int sum)
{
	if (sum / 1000 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 1000));
	}
}


/**
 * print_hundred - print out the digit in the hundre spot
 * @sum: value to scan for hundred spot
 *
 * Return: void
 */
static void print_hundred(int sum)
{
	if (sum / 100 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 100));
	}
}


/**
 * print_tenth - print out the digit in the the tenth spot
 * @sum: value to scan for tenth spor
 *
 * Return: void
 */
static void print_tenth(int sum)
{
	if (sum / 10 == 0)
	{
		_putchar(32);
	}
	else
	{
		if ((sum / 10) > 9)
		{
			_putchar('0' + (sum / 10 % 10));
		}
		else
		{
			_putchar('0' + (sum / 10));
		}
	}
}


/**
 * print_base10 - print out the digit in the base10 spot
 * @sum: value to scan for base10 spot
 *
 * Return: void
 */
static void print_base10(int sum)
{
	if (sum % 10 == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0' + (sum % 10));
	}
}

/**
 * print_times_table - print out the 9 times table
 * @n: value use to generate times table.
 *
 * Return: void
 */
void print_time_table(int n)
{
	int v, h;

	if (n > 15)
	{
		return;
	}
	for (h = 0 ; h < n + 1 ; h++)
	{
		_putchar('0');
		for (v = 1 ; v < n + 1 ; v++)
		{
			int sum = v * h;

			_putchar(',');
			print_thousand(sum);
			print_hundred(sum);
			print_tenth(sum);
			print_base10(sum);
		}
		_putchar('\n');
	}
}

