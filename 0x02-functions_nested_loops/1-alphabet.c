#include "main.h"

/**
 * main - Entery point
 *
 * Description: print_alphabet - utilizes on the _putchar function to print
 * the alphabet from a to z
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
