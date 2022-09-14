#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the passed character to the console
 * @char: character to print
 *
 * Return: On success (1)
 *
 * On failure: -1, errno set appropriately
 *
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
