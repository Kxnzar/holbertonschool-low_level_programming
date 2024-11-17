#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable characters/letters*/
	char letter;

	/* Loop with ASCII values of the lowercase letters (a-z)*/
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter); /* This is going to print each letter, one by one*/
	/* Loop with ASCII values of the uppercase letters (A-Z)*/
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n'); /*this prints a newline after the alphabet code*/
	return (0);
}
