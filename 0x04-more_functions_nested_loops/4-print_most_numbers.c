#include "main.h"
/**
* print_most_numbers - print integers from 0 to 9 exclude 2 and 4
*/
void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if ((i != 2) && (i != 4))
_putchar('0' + i);
i++;
}
_putchar('\n');
}
