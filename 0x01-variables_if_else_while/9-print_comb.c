#include <stdio.h>

/**
*main - prints all possible combinations of single-digit numbers
*followed by a new line
*Return: 0 (success)
*/

int main(void)
{

int i;

for (i = '0'; i <= '9'; i++)
{

putchar(i);

if (i < '9')
{
putchar(',');
putchar(' ');
}

}

putchar('\n');

return (0);

}
