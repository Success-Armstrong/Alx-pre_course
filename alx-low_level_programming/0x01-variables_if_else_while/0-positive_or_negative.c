#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Tell us about the input number
 *
 * Return: always (0)
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
		if ( n > 0)
		{
			printf("%d is postive", n);
		}
		else if ( n == 0)
		{
			printf("%d is zero", n);
		}
		else (n < 0)
		{
			printf("%d is negative", n);
	return (0);
}
