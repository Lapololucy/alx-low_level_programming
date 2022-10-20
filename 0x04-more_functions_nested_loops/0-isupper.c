#include "main.h"

/**
 * _isupper - check if the given character is an uppercase letter.
 * @c: character to be tested
 *
 * Return: 1 if the uppercase else 0 (false)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

