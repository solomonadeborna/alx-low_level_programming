#include "main.h"

/**
*times_table -  prints the 9 times table, starting with 0
**Return: empty output
*/

void times_table(void)
{

int a, b, c, d, r;
for (a = 0; a <= 9; a++)
{

for (b = 0; b <= 9; b++)
{

c = a * b;
if (c > 9)
{

d = c % 10;
r = (c - d) / 10;
_putchar(44);
_putchar(32);
_putchar(r + '0');
_putchar(d + '0');

}

else
{

if (c != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(c + '0');
}
}

_putchar('\n');

}
}
