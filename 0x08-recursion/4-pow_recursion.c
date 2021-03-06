#include "holberton.h"

/**
 *  _pow_recursion - Powers a number.
 *
 * @x: Value of the number.
 * @y: Value of the power
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
