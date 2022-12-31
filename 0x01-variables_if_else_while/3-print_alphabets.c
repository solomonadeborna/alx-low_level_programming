#include <stdio.h>

/**
*main - prints the alphabet in lowercase, and then in uppercase
*followed by a new line
*Return: 0 (success)
*/

int main(void)
{

char c;
char C;

for (c = 'a'; c <= 'z'; c++)
{

putchar(c);

}

for (C = 'a'; C <= 'z'; C++)
{

putchar(C);

}

putchar('\n');

return (0);

}
