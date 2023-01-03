#include "main.h"

/**
*puts2 - Prints one char out of two of a string.
*@s: The string under consideration.
*Return: void
*/
void puts2(char *s)
{
int index = 0;
len = 0;

while (s[index++])
len++;

for (index = 0; index < len; index += 2)
_putchar(s[index]);

_putchar('\n');
}
