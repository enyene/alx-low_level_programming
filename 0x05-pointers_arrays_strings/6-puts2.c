#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a newline
 * @str: string to print
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
