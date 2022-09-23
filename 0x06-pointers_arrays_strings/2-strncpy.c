#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination value
 * @src: the source value
 * @n: number of bytes from src
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e = 0, f = 0;

	while (src[f])
	{
		f++;
	}
	while (e < n && src[e])
	{
		dest[e] = src[e];
		e++;
	}
	return (dest);
}
