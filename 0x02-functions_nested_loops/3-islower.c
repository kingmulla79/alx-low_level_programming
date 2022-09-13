#include "main.h"
#include<stdio.h>

/**
 * _islower - checks for lowercase characters
 *
 *@c: The value to be checked
 *
 * Return: 1 (Lowercase) 0(Otherwise)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

