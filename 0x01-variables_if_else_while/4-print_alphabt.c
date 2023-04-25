#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabets in lower and upper case
 * using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int j;

	for (j = 0; j < 26; j++)
	{
	if (j != 5 && j != 17)

	putchar(alp[j]);
	}
	putchar('\n');

return (0);
}
