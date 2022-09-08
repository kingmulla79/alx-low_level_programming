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

printf("Size of a char: %zu byte(s)\n", sizeof(grade));
printf("Size of an int: %zu byte(s)\n", sizeof(age));
printf("Size of a long int: %zu byte(s)\n", sizeof(admission_number));
printf("Size of a long long int: %zu byte(s)\n", sizeof(p_number));
printf("Size of a float: %zu byte(s)\n" sizeof(mass));
return (0);
}
