#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

int firstNumber;
int secondNumber;

for (firstNumber = '0' ; firstNumber <= '8' ; firstNumber++)
{
	for (secondNumber = '0' ; secondNumber <= '9' ; secondNumber++)
	{
		if (secondNumber > firstNumber)
		{
			putchar(firstNumber);
			putchar(secondNumber);
			if (firstNumber == '8' && secondNumber == '9')
				continue;

			putchar(',');
			putchar(' ');
		}

	}
}

putchar('\n');
return (0);
}
