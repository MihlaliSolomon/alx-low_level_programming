#include <stdio.h>

/**
 * main - print base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int a_b_c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a_b_c <= 'f')
	{
		putchar(a_b_c);
		a_b_c++;
	}

	putchar('\n');

	return (0);
}
