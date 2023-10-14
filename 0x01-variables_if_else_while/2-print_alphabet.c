#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point
*
*Description: false or true validation
*
*Return: 0 (success)
**/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
