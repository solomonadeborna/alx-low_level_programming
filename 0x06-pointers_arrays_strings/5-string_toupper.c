/**
* string_toupper - Change all lowercase letters to uppercase
* @s: string
* Return: c
*/
char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
