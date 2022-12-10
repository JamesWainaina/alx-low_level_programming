#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Label: Printing numbers from the base of ten
 *
 * Return: 0
 */
int main(void)
{
	char t = '0';

	while (t <= '9')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
