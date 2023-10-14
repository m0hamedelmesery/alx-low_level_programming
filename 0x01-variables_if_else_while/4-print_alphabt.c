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
char a = 'a';
while (a <= 'z')
{
if (a == 'q' || a == 'e')
a++;
putchar(a);
a++;
}
putchar('\n');
return (0);
}
