#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);


	}
	 _putchar('\n');

}
