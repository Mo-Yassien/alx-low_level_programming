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
    int i = 0;

    /* Skip leading spaces */
    while (s[i] == ' ')
        i++;

    /* Check for sign */
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Convert the digits to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        /* Check for overflow */
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}
