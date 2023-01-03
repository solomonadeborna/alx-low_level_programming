#include "main.h"

/**
*_puts - Prints a string to stdout.
*@s: The string to be printed.
*Return: nothing
*/
void _puts(char *s)
{
while (*s)
_putchar(*s++);

_putchar('\n');
}
