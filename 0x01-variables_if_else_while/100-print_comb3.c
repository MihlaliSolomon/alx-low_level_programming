#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	for (n = '0'; n < '9'; n++)
	{
		for (b = n + 1; b <= '9';b++)
		{
			if (b != n)
			{
				putchar(n);
				putchar(b);

				if (n == '8' && b == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}



