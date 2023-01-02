#include "main.h"
#include <stdio.h>

/**
*_abs - function that computes the absolute value of an integer.
*@n: the number to be checked
*Return: absolute value of number or zero
*/

int _abs(int n)
{

if (n < 0)
{

int abs_val;
abs_val = n * -1;
return (abs_val);

}
return (n);

}
