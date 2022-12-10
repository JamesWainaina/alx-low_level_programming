#include <stdio.h>
/**
 * main - main block
 * Label:Get random letters
 * Return: 0
 */
int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		if (t != 'e' && t != 'q')
		{
			putchar(t);
		}
		t++;
	}
	putchar('\n');
	return (0);
}
