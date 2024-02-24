#include <stdio.h>
/**
 * main - void entry
 *
 * Return: always zero (success)
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	{
	char letter = 'A';

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
