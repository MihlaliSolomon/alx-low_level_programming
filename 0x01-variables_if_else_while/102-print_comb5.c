#include <stdio.h>

/**
 * main - print all possible combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	for (n = 0; n <= 98; n++)
	{
		for (b = n + 1; b <= 99; b++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (n == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n')

	return (0);
}
