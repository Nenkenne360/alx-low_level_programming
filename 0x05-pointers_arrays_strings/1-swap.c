#include "main.h"

/**
 *swap_int - swaping values of pointers
 *
 * @a: pointer
 *
 * @b: pionter
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;

	*a = n;
	*b = m;
}
