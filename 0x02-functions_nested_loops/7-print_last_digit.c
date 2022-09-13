#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: number to be checked
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
	int num;

	if (c < 0)
		num = -1 * (c % 10);
	else
		num = c % 10;
	_putchar((num % 10) + '0');
	return (num % 10);
}
