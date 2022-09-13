#include "main.h"

/**
 * print_sign - checks for the sign of a number
 *
 * @n: The number being checked
 *
 * Return: 1 (Positive) 0 (Zero) -1 (Negative)
 */

int print_sign(int n)
{
	int digit;

	if (n > 0)
	{
		digit = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		digit = 0;
		_putchar('0');
	}
	else
	{
		digit = -1;
		_putchar('-');
	}
	return (digit);
}
