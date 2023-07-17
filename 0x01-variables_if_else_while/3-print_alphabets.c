#include <stdio.h>

/**
* main - Prints alphabets in lower and upper case
* using only putchar
*
* Return: Always 0 (Success)
*/

int main(void)

{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int j;

for (j = 0; j < 52; j++)
{putchar(alp[j]);
}

putchar('\n');

return (0);
}
