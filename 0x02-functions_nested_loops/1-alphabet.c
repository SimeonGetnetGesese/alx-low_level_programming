#include "holberton.h"


/**
 * main - assigns a random number to int n
 * Print's a-z small letters
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
