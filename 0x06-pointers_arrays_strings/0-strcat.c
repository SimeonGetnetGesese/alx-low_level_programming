#include "holberton.h"

/**
 * _strcat - merges to char * value.
 *
 * @dest: is a character that increases the value for dest till it finds NULL
 *
 * @src: is a character that increases the value for src till it finds NULL
 * Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
