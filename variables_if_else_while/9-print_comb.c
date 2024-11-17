#include <stdio.h>
/**
 * main - Entry point working with putchar and commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
		putchar(numbers),
		(numbers < 57) ? putchar(44) : 0,
		(numbers < 57) ? putchar(32) : 0;

	putchar(10);
	return (0);
}
