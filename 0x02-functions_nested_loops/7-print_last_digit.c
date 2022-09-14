#include "main.h"
#include "6-abs.c"
/**
 *print_last_digit - main function
 *
 *@n: integer to get last digit of
 *
 *Return: last digit of n
 */
int print_last_digit(int n)
{
int rem = n % 10;
if (rem < 0)
{
rem  = -(rem);
_putchar(rem + '0');
return (rem);
}
else
{
_putchar(rem + '0');
return (rem);
}
return (0);
}
