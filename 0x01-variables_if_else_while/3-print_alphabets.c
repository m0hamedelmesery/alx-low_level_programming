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
char A = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}

