#include "main.h"

/**
 * _memcpy - copies n bytes from mem to dest
 * @dest: dest memeory area
 * @src: source memory are
 * @n: number of bytes
 *
 * Return: ponter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
