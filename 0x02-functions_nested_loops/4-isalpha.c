#include "main.h"

/**
 *_isalpha -  checks for alphabetic  character.
 *Returns 1 if 'c' is letter of any case (upper or lower)
 *Returns 0 otherwise
 *@c: ASCII code
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{

	return (1);
	}
	else
	{

	return (0);
	}
	_putchar('\n');
}
