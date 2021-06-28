#include "holberton.h"

/**
 * swap_int - Swap the value of a and b.
 * @a: Change value of a to 42.
 * @b: Changes value of b to 98.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
