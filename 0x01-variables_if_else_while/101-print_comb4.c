#include <stdio.h>

/**
 * main - print all possible different combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, s, l

	for (p = '0'; p < '8'; p++)
	{
		for (s = p + 1; s <= '9'; s++)
		{
			for (l = s + 1; l <= 10; l++)
			{
				putchar((p % 10) + 0);
				putchar((s % 10) + 0);
				putchar((l % 10) + 0);

				if (p == '7' && s == '8'  && l == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
