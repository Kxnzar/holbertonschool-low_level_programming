#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 *
 * Description: This function uses a loop to print ASCII values of numbers
 * from '0' to '9', and then prints a new line.
 */
void print_numbers(void)
{
	int number = 48;
		do {
			_putchar(number);
			number++;
		} while
		(number <= 57);
		_putchar('\n');
}
