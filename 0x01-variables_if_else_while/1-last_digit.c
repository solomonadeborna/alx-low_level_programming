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
int LD;
srand(time(0));
n = rand() - RAND_MAX / 2;
LD = n % 10;
if (LD > 5)
{
printf("last digit of %d \n", n);
printf("is %d \n", LD);
printf("and is greater than 5\n");
}
else if (LD == 0)
{
printf("last digit of %d \n", n);
printf("is %d \n", LD);
printf("and is 0 \n");
}
else if (LD < 6)
{
printf("last digit of %d \n", n);
printf("is %d\n", LD);
printf("and is less than 6 and not 0 \n");
}

return (0);

}
