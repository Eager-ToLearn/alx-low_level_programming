#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints all possible different combinations of two numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int n;
int i;

for (n = 48; n <= 56; n++)
{
for (i = 49; i < 57; i++)
{ if (i > n)

for (i = 49; i <= 57; i++)
{
if (i > n)
{

putchar(n);
putchar(i);
if (n != 56 || i != 57)
putchar(' ');
putchar(' ');

}

}

}

}

putchar('\n');

return (0);
}
