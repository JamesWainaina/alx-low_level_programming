# include <stdio.h>
/**
 * main - main block
 * label - print alphabet in lower case and upper case
 *
 * Return: 0
 */
int main(void)
{
	char t  = 'a';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}

	t = 'A';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
