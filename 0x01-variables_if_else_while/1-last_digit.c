#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -if the last digit of n is:
 * a)greater than 5:the string and is greater than 5
 * b) 0: the string and is 0
 * c)less than 6 and not 0: the string and is less than 6 and not 0
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	w = n % 10;
	printf("Last digit of %d is %d", n, w)
	if (w > 5)
	{
		printf("and is greater than 5");
	}
	if (w == 0)
	{
		printf("and is 0");
	}
	if (w < 6 && w != 0)

	{	printf("and is less than 6 not 0");

	}
	printf("\n");

	return (0);

}
