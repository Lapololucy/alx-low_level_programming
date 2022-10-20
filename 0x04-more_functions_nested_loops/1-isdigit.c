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
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

