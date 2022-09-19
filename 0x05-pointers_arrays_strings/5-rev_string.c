#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: passed variable
 *
 * Return: no return value
 */

void rev_string(char *s)
{
	int i, iterator, k;
	char *a, tmp;

	a = s;

	while (s[iterator] != '\0')
	{
		iterator++;
	}

	for (k = 1; k < iterator; k++)
	{
		a++;
	}

	for (i = 0; i < (iterator / 2); i++)
	{
		tmp = s[i];
		s[i] = *a;
		*a = tmp;
		a--;
	}
}
