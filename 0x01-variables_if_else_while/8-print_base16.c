#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int number;
char alphabet;

for (number = '0'; number <= '9'; number++)
	putchar(number);

for (alphabet = 'a'; alphabet <= 'f' ; alphabet++)
	putchar(alphabet);

putchar('\n');
return (0);
}
