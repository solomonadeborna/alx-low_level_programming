#include "main.h"

/**
*int _islower(int c)- checks for lowercase character
*Return: 1 lowercase; otherwise 0
*/

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}

return (0);
}