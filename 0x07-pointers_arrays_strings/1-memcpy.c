#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @dest: memory where is store
 * @src: where memory are is copied
 * @n: number of bytes
 *
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
