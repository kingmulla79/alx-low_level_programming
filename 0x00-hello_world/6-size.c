#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char grade;
int age;
long int admission_number;
long long int p_number;
float mass;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(grade));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(age));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(admission_number));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p_number));
printf("Size of a float: %lu byte(s)\n" (unsigned long)sizeof(mass));
return (0);
}
