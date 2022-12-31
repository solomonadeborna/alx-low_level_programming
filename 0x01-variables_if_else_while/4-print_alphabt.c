#include <stdio.h>

/**
*main - prints the alphabet in lowercase, except q and e
*followed by a new line
*Return: 0 (success)
*/

int main(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
{
while (c != q && c != e)
putchar(c);

}

putchar('\n');

return (0);

}
