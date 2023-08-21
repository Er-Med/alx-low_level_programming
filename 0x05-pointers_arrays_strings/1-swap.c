#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
*/

void swap_int (int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
