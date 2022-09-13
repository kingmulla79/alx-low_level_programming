#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 10; i++)

	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);

			alphabet++;
		}
		alphabet = 'a';

		_putchar('\n');
	}
}
