#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabet;
	int iterator;

	for (iterator = 0; iterator < 10; ++iterator)
	{
		for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
