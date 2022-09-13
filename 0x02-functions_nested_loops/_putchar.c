#include "main.h"
#include<unistd.h>

/**
 * _putchar - write a character to standard output
 *
 * @c: char to print
 *
 * Return: Always 1 (Success)
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
