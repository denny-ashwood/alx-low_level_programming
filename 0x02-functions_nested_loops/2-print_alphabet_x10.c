#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int iterator;

	for (iterator = 0; iterator < 10; ++iterator)
	{
		for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
