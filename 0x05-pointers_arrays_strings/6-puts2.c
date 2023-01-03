#include "main.h"

/**
*puts2 - Prints one char out of two of a string.
*@s: The string
*Return: nothing
*/
void puts2(char *s)
{
int i;
int j = 0;

while (s[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
