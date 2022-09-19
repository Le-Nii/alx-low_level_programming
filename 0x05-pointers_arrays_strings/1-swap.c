#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer parameter.
 * @b: second integer parameter.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
