#include "main.h"
/**
 *  print_last_digit -  prints the last digit of a number.
 *@n: integer
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)

{
	int m;

	m = n % 10;

	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
