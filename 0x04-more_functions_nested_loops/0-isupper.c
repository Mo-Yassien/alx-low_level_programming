#include "main.h"

/**
 * _isupper - checks if c is upper
 *
 * @c: input of alphabet
 *
 * Return: 1 if it's uppercase and 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
