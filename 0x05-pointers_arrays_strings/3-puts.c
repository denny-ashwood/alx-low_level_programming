#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: the passed string variable
 *
 * Return: no return value as it is a void function
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
	}
	_putchar('\n');
}
