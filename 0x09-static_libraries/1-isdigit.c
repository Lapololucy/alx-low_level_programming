#include "main.h"

/**
 * _isdigit - check the given value is a digit
 * @c: value to check
 *
 * Return: 1 if digit else 0 (false)
 *
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}

