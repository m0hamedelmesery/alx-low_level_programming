#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - entry point
*
*Description: printing compinations
*
*Return: 0 (success)
**/

int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar (digit + 48);
if (digit != 9)
{
putchar (',');
putchar (' ');
}
digit++;
}
putchar ('\n');
return (0);
}
