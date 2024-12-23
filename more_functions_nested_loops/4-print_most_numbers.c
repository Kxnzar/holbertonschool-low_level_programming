#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9, followed by a new line
 *
 * Description: This function uses a nested loop to print values of numbers
 *  from '0' to '9', and then prints a new line.
 */
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
			_putchar(number);
	}
	_putchar('\n');
}
