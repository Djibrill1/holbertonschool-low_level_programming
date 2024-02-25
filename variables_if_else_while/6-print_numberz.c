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
		putchar((number % 10) + '0');
		number++;

	}

	return (0);
}
