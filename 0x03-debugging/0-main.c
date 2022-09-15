#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}