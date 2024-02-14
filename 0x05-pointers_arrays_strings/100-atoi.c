#include "main.h"
#include <limits.h>

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
	int digit;
	int state = 0;  /* 0: before numbers, 1: within numbers */

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			/* Check for overflow */
			if (state == 1 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)))
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			result = result * 10 + digit;
			state = 1;
		}
		else if (state == 1)
		{
			/* If non-numeric character is encountered after numbers, break the loop */
			break;
		}

		s++;
	}

	return result * sign;
}
