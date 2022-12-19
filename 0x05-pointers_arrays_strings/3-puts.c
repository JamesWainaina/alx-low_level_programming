#include "main.h"

/**
 * _puts - Prints a String to stdout.
 * @str: The String to be rpinted.
 */
void _puts(cahr *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
