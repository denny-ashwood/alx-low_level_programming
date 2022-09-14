#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: number being tested
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	else
	{
		_putchar(last_digit + '0');
	}

	return 0;
}
