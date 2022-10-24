#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: pointer to first value
 * @b: ponter to second value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
