#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 *
 * @dest: copy to
 * @src: copy from
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest++;
	}
	return (dest);
}
