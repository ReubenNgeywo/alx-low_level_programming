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
	char d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	return (d);
}
