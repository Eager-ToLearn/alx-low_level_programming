#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes character c  
 *@c: the caharacyer to print
 * Return: 1 (Success)
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
