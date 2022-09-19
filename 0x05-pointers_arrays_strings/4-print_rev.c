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
	while (*s != '\n')
	{
		_putchar(*s);

		--s;
	}
	_putchar('\n');
}
