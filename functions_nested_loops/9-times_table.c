#include "main.h"
#include <stdio.h>

/**
 * times_table - main function
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			if (result > 9)
			{
				if (col != 0)
				{
					_putchar(44);
					_putchar(32);
				}
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
			}
			else
			{
				if (col != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + result);
			}
		}

	_putchar('\n');
	}
}
