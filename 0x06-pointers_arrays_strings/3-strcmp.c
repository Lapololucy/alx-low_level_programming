#include "main.h"

/**
 * _strcmp -> a function to compare two strings
 * @s1: te string to compare against
 * @s2: the string to compare.
 *
 * Return: an int value.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[1]);
		}
		i++;
	}

	return (0);
}

