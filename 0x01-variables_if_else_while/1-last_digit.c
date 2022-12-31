#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - print the last digit of the number stored in the variable n
*Return: 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
LD = n % 10;
if (LD > 5)
{
printf("%d last digit of \n", n);
printf("%d is \n", LD);
printf("%d and is greater than 5\n");
}
else if (LD == 0)
{
printf("%d last digit of \n", n);
printf("%d is \n", LD);
printf("%d and is 0 \n");
}
else if (LD < 6)
{
printf("%d last digit of \n", n);
printf("%d is \n", LD);
printf("%d and is less than 6 and not 0 \n");
}

return (0);

}