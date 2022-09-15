#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
int counter;
unsigned long i, j, k;
unsigned long a, b, c, result;
counter = 0;
i = 0;
j = 1;
for (counter = 1; counter <= 91; counter++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
a = i % 1000;
i = i / 1000;
b = j % 1000;
j = j / 1000;
while (count <= 98)
{
result = ((a + b) / 1000);
c = (a + b) -result * 1000;
k = ((i + j) +result);
a = b;
b = c;
i = j;
j = k;
if (c >= 100)
printf("%lu%lu", k, c);
else
printf("%lu0%lu", k, c);
if (counter != 98)
printf(", ");
counter++;
}
putchar('\n');
return (0);
}
