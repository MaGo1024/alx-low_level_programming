#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_puts - function to print a string
 *@str: pointer value of character
 * Return: string.
 */
void _puts(char *str)
{
int i;
for (i = 0; *(str + i) != '\0'; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
