#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		_putchar(*(s - 1));
		s--;
		length--;
	}

	_putchar('\n');
}
