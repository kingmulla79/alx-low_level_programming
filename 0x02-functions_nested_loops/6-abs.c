#include "main.h"

/**
 * _abs - get the absolute value of a number
 *
 *@c: value to be checked
 *
 * Return: Absolute value
 */

int _abs(int c)
{
	int absolute;

	if (c >= 0)
		absolute = c;

	else
		absolute = (c / -1);
	return (absolute);
}
