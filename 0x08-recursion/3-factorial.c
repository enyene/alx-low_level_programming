#include "main.h"

/**
 * factorial - returns the factorail of a number
 * @n: number to return
 *
 * Return: factorail of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
