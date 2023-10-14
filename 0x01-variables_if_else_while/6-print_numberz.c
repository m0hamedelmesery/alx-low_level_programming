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
int x = 0;
while (x <= 9)
{
putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}
