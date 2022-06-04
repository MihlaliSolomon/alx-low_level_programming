#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase, except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char alphab = 'a'

	while (alphab <= 'z')

	{
		if ((alphab != 'e') && (alphab != 'q'))
		{
			putchar(alphab)
		}
		alphab++;
	}
	putchar('\n');

	return (0)
}
