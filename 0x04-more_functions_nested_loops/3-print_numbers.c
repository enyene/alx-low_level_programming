#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (int i = 0; i <= 9; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
	return (0);
}
