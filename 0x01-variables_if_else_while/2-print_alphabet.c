#include<stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
alphabet = 'a';

while (alphabet < 'z')
{
	putchar(alphabet);
	putchar('\n');
	alphabet++;
}
return (0);
}
