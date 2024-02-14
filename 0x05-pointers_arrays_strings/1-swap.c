#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first int parameter
 * @b: second int parameter
 *
*/

void swap_int(int *a, int *b)
{
	int simp;
	simp = *a;



	*a = *b;
	*b = simp;
}
