#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success0
 */

int main(void)
{
	int n;
	int i;
	int h;

	for (h = 0; h != 8; h++)
	{
		for (n = h + 1; n != 9; n++)
		{
			i = n + 1;
			do {
				putchar('0' + n);
				putchar('0' + i);
				putchar('0' + h);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}

