#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign random number to variable and determines whether they are less than 6 greater than 5 or 0
 *
 * Return Always 0 (Success)
 */

int main(void)

{

	int n, lstd;


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lstd = n % 10;
	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, lstd);
	}	

	return (0);

}
