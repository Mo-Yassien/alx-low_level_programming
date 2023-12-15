#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all single digit number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
		printf("%i", digit);
	}
	printf("\n");
	return (0);
}
