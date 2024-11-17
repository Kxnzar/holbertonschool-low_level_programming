#include <stdio.h>

/**
 * main - Entry main dowhile numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 48;

	do {
		putchar(number);
		number++;

	} while (number <= 57);

	putchar('\n');
	return (0);
}
