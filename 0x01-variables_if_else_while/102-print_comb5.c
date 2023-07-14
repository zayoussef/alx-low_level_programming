#include <stdio.h>

/**
 * main - Entry point for a program that print all possible
 * different combinations of two two-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');

	return (0);
}
