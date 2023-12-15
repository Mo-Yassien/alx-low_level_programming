#include <unistd.h>

/**
 * main - Entery point
 *
 * Description: print all digits of base 16
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
	putchar('0' + digit);
	digit++;
	}

	digit = 0;

	while (digit < 6)
	{
	putchar('a' + digit);
	digit++;
	}

	putchar('\n');

	return (0);
}
