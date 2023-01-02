include "main.h"

/**
*print_last_digit - prints last digit of a number
*@n: the number to be checked
*Return: value of last digit of number
*/

int print_last_digit(int n)
{

int LD;
LD = n % 10;
if (LD < 0)
{

LD = LD * -1;
}
_putchar(LD + '0');
return (LD);

}
