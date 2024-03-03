#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap(int *a, int *b);

int main(void)
{
	int a = 50;
	int  b = 40;
	printf("a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
void swap(int *a , int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
