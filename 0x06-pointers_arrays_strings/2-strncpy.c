#include "main.h"
/**
*strncpy - Copies at most an inputted number
*@dest: The buffer storing the string copy.
*@src: The source string.
*@n: The maximum number of bytes to be copied from src.
*Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int src_len = 0;
while (src[i++])
src_len++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[index];
for (i = src_len; i < n; i++)
dest[i] = '\0';
return (dest);
}
