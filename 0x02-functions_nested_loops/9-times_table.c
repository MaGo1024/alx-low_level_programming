#include "main.h"
/**
 *times_table - prints times table
 *
 *Return: Nothing
 */
void times_table(void)
{
int b;
int c;
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 9; c++)
{
int mult = c * b;
if (c == 0)
{
_putchar('0');
}
else if (mult <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(mult + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}
}
_putchar('\n');
}
}
