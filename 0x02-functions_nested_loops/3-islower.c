#include "main.h"

/**
 *_islower -  checks for lowercase character.
 *Returns 1 if 'c' is lowercase
 *Returns 0 otherwise
 *@c: ASCII code
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	else
	{

		return (0);
	}
	_putchar('\n');
}
