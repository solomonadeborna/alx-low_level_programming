#include <stdio.h>

/**
*main - prints the lowercase alphabet in reverse
*followed by a new line
*Return: 0 (success)
*/

int main(void)
{

char lastD;

for (lastD = 'z'; lastD >= 'a'; lastD--)
{

putchar(lastD);

}

putchar('\n');

return (0);

}
