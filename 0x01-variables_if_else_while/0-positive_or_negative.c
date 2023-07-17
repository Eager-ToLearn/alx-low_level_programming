#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - checks if integer n is positive,negative or zero
*
* Return: Always 0 (Success)
*/
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("%d :Is positive\n", n); }
else if (n == 0)
printf("%d :Is zero\n", n);
else
printf("%d :Is negative\n", n);

return (0); }
