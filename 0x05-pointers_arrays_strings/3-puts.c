#include "main.h"

/**
 * _puts - Prints a String to stdout.
 * @str: The String to be rpinted.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
