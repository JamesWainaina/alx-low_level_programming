#include "main.h"
#include <unistd.h>


/**
 * _putchar - writts the cahracter c to stdout
 * @c: the character to print
 *
 * REturn: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
