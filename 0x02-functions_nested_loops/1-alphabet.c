#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(){
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
