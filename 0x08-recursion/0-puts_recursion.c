#include 'holberton.h'

/**
 * _puts_recursion - Uses Recursion to print a String.
 *
 * @s: Runs all characters in the String.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(++s);
}
