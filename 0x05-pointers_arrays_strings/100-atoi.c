#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Skip leading spaces */
	while (*s == ' ')
		s++;

	/* Check for sign */
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/* Convert the digits to integer */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow */
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (*s - '0' > INT_MAX % 10)))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}
