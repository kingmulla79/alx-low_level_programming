#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: value being checked
 *
 * Return: 1 (Alphabetic) 0 (Otherwise)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
