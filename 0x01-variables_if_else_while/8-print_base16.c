#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int h[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};

	for (i = 0; i < 16; i++)
		putchar(h[i]);
	putchar('\n');
	return (0);
}

