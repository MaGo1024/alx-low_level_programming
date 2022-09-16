#include "main.h"
/**
* more_numbers - print 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
int i, j = 0;

while (i <= 9)
{
while (j <= 14)
{
if (j >= 10)
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
j++;
}
i++;
}
_putchar('\n');
}
