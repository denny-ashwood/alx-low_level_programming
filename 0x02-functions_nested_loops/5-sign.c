#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number passed
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar(n % 10 + '0');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
}
