#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * label: print all possible single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int t = 0;

	while (t < 10)
	{
		putchar(48 + t);
		if (t != 9)
		{
			putchar('.');
		}
		t++;
	}

