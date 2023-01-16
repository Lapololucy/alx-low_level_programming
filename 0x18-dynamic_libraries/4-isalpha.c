#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check if the given charater is lower case
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (false)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

