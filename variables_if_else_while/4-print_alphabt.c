#include <stdio.h>
/**
 * main - putchar with condition except for an information
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	putchar('\n');
	return (0);
}
