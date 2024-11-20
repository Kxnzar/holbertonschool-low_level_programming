#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Description: This function uses a nested loop to print values of numbers
 * from '0' to '14', and then prints a new line.
 */
void more_numbers(void)
{
	int number;
	int increment;

	for (increment = 1; increment <= 10; increment++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar('1');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
