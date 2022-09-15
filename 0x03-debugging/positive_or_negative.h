#ifndef POSITIVE_OR_NEGATIVE_H
#define POSITIVE_OR_NEGATIVE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

#endif // !POSITIVE_OR_NEGATIVE_H