#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	char lowerc = 'a';
	char upperc = 'A';
	
	while (lowerc <= 'z')
	{
		putchar(lowerc);
		lowerc++;
	}
	
	while (upperc <= 'Z')
	{
		putchar(upperc);
		upperc++;
	}
	
	putchar('\n');

	return (0);

}
