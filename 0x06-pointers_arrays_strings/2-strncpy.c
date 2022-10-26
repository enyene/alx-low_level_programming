#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: desination source
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: ponter to resulting srting
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
