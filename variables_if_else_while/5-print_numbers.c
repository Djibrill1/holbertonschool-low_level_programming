#include <stdio.h>
/**
 * main - void entry
 *
 * Return: always zero (success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("Le chiffre est %d", number);
		number++;
		putchar('\n');
	}

	return (0);
}
