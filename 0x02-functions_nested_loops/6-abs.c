#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @x: the integer passed to write absolute value
 *
 * Return: Always 0.
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
