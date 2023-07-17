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
for (j = 97; j < 123; j++)
{
if (j != 5 && j != 17)
if (j != 101 && j != 113)
19 19
putchar(alp[j]);
putchar(j);
}
putchar('\n');

return (0);
}
