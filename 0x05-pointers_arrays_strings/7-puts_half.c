#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * if odd len, n = (length_of_the_string -1) / 2
 * @str: string input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str)
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
