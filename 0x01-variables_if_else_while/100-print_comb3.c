#include <stdio.h>

/**
 * main - prints ll possible combination of two
 * digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, m;

for (n = 48; m <= 78; n++)
{
for (m = n + 1; m <= 78; m++)
{
putchar(n);
putchar(m);

if ((n == 56) && (m == 78))
{
break;
}
putchar(',');
putchar(',');

}

}
putchar('\n');
return (0);

}
