#include "main.h"
#include <stdio.h>
/**
 *swap_int - swap paramater value a and b
 *@a: pointer value a
 *@b: pointer value b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
