#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line.
 * You can only use _putchar twice in your code.
 */
void print_numbers(void)
{
    int num;

    for (num = 0; num < 10; num++)
    {
        _putchar(num + '0'); // Convert num to character and print
    }
    _putchar('\n'); // Print newline after printing all numbers
}
