#include "main.h"

/**
 * print_numbers - function that prints
 * the numbers, from 0 to 9, followed by a new line.
 * Return: no return value
 */

void print_numbers(void)

{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

}
