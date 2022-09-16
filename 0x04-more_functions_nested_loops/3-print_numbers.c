#include "main.h"

/**
 * prints_numbers - a function thst prints numbers from 0 to 9
 *
 * Return: 0 - 9 followed by a newline
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	
		_putchar(a + '0');

	_putchar('\n');
}
