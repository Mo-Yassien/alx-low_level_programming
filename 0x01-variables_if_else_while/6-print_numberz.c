#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all digits that base 0f 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
	putchar(digit + '0');
	}

	putchar('\n');

	return (0);
}
