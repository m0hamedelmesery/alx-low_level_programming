#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point
*
*Description: printing alphabets
*
*Return: 0 (success)
**/

int main(void)
{
char z = 'z';
while (z >= 'a')
{
putchar(z);
z--;
}
putchar('\n');
return (0);
}
