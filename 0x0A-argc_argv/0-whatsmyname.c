#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the comand line.
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (count == argc - 1)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
