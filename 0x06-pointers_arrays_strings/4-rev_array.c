#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a: array
 * @n:is the number of elements of the array
 *
 * Return:void function
 */

void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}

