#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *label: Getting a random letter
 * Return: 0
 */
int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
