#include "main.h"

/**
*puts_half - Prints half of a string.
*@s: The string
*Return: nothing
*/
void puts_half(char *s)
{
int j;
int i = 0;

while (s[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
j = (j - 1) / 2;
j += 1;
}
else
{
j = i / 2;
}
for (; j < i; j++)
{
_putchar(s[j]);
}
_putchar('\n');
}
