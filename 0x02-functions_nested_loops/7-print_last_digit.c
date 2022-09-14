#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: number being tested
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		x = -x;

		_putchar(x + '0');

		return (x);
	}
	_putchar(x % 10 + '0');

	return (0);
}
