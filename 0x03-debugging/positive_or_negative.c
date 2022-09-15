#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or negative
 *
 *@n: integer to check
 *
 * Return: Nothing
 */

void positive_or_negative(int n)
{
	if (n < 0)
	printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
