#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char alphabet;
alphabet = 'a';

while (alphabet <= 'z')
{
	if (alphabet != 'q' && alphabet != 'e')
	{
	putchar(alphabet);
	}
}
putchar('\n');
return (0);
}
