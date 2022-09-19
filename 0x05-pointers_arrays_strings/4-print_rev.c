#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: passed string variable to reverse its value
 *
 * Return: no return value
 */

void print_rev(char *s)
{
	int iterator;

	iterator = 0;

	while (s[iterator] != '\0')
	{
		++iterator;
	}

	iterator -= 1;

	while (iterator >= 0)
	{
		_putchar(s[iterator]);

		--iterator;
	}
	_putchar('\n');
}
