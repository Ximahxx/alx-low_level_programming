#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: an int
 * @b: an int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
