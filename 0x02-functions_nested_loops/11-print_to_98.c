#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 *print_to_98 - print from 0 to 98 function
 *
 *@n: the number to start counting to 98
 *
 *Return: Always 0
 */
int print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
