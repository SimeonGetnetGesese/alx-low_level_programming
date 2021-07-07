#include "holberton.h"

/**
 * _strlen_recursion - Print the number of char in the string
 * @s: Counts the char.
 *
 * Return: n.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
