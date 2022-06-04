#include <stdio.h>


/**
 * main - print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab = 'z';

	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab--;
	}
	putchar('\n');

	return (0);
}
