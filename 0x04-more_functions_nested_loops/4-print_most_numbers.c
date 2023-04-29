#include "main.h"

/**
 * print_numbers - function that prints
 * the numbers, from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 *
 */

void print_numbers(void)

{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
			_putchar(c);
			}
		}
	}
	_putchar('\n');
}
