#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char b;
char c;
for (b = 0; b <= 9; b++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
