#include "main.h"

/**
*_isdigit- checks if character is a digit
*@c: the character to be checked
*Return: 1 if c is a digit and 0 for anything else
*/

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}

return (0);
}
