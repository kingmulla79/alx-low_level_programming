#include "main.h"

/**
 * times_table - prints the table for numbers btw 0 and 9 inclusive
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a;

	int b;

	int multi;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			multi = a * b;

			if ((b / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(multi + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
