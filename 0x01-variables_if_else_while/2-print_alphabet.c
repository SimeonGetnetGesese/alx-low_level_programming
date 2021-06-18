#include <stdio.h>

/**
 * main - prints all the alphabets in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
