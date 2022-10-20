#include "main.h"

/**
 * _isupper - check if the given character is an uppercase letter.
 * @c: character to be tested
 *
 * Return: 1 if the uppercase else 0 (false)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

