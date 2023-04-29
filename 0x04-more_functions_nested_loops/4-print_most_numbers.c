#include "main.h"

/**
 * print_numbers - function that prints
 * the numbers, from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 *
 */

void print_numbers(void)

{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (!(num == 50 || num == 52))
			_putchar(num);
	}
	_putchar('\n');
}
