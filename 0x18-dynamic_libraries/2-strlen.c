#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string for which lenght is determined
 * Return: length of the s
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
