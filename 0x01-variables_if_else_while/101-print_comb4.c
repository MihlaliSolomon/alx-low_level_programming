#include <stdio.h>

/**
 * main - print all possible different combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, s, l;

	for (p = 0; p < '9'; p++)
	{
		for (s = p + 1; s <= '9'; s++)
		{
			for (l = s + 1; l <= '9'; l++)
			{
				if ((s != p) != l)
				{
					putchar(p);
					putchar(s);
					putchar(l);

					if (p == '7' && s == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
