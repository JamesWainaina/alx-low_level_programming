#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * label: program that prints all possible combination of digits
 *
 * Return: 0
 */
int main(void)
{
	int t;
	int e = 0;

	while (e < 10)
	{
		t = 0;
		while (t < 10)
		{
			if (e != t && e < e)
			{
				putchar('0' + e);
				putchar('0' + t);

				if (t + e != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			t++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
