#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	for(char alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		putchar(alphabet);
	}
	char space = '\n';
	putchar(space);
	return 0;
}
