#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for lowercase character
 *
 * @c: the character to check
 *
 * Return: 1 (Success), 0 Otherwise
 *
 */

int _isalpha(int c)
{
	if (isalpha(c) && (islower(c) || isupper(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
