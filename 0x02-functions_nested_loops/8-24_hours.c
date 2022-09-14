#include "main.h"
/**
 *jack_bauer - prints every minutes of the day
 *
 *Return: Nothing
 */
void jack_bauer(void)
{
int b;
int c;
for (b = 0; b <= 23; b++)
{
for (c = 0; c <= 59; c++)
{
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar(':');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
_putchar('\n');
}
}
}
