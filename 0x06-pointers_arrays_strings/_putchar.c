#include "main.h"
#include <unistd.h>

/**
 * _putchar -prints character c
 * @c: character to print
 * Return: on success 1
 * on error, -1 is returned
 * errno set
 *
 */

int _putchar(char c)

{
	return (write(1, &c, 1));


}
