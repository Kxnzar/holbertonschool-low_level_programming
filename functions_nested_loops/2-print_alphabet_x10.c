#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	char letter;
	int number;

	for (number = 1; number <= 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
