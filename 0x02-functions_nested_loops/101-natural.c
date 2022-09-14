#include <stdio.h>
/**
 *main - main function
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int b;
int c = 0;
for (b = 0; b < 1024; b++)
{
if (b % 3 == 0 || b % 5 == 0)
{
c += b;
}
}
_printf("%d\n", b);
return (0);
}
