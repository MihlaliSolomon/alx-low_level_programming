#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		continue;
	
	_putchar('\n');
	return (0);
}
