#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ms = "_putchar";

	while (*ms)
	{
		_putchar(*ms);
		ms++;
	}
	_putchar('\n');

	return (0);

}
