#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

#define MAX 10

int main(void)
{
char name[] = "_putchar";
for (int count  = 0; count < MAX; count++)
{
if (name[count] == '\0')
{
putchar('\n');
break;
}
else
putchar(name[count]);
}
return (0);
}
