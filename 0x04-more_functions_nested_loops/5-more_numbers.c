#include "main.h"

/**
*more_numbers- prints 10 times the numbers, from 0 to 14
**followed by new line
*Return: the numbers from 0 to 14
*/

void more_numbers(void)
{
int x;
int i = 0;
do {

for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
i++;
_putchar('\n');
} while (i < 10);

}
