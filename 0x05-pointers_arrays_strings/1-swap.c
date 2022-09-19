#include <stdio.h>

/**
 * swap_int - reset the value of the passed variable
 *
 * @a: the first passed variable for a swap deal
 *
 * @b: the second passed variable for a swap deal
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
