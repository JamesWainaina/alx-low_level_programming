#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - annoying
 *
 * Return: 0
 */


int main(void)

{

		int n;
		int y;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				y = n % 10;
				printf("Last digit of %d is %d", n, y);
				if (y > 5)
				{
					printf("and is gerater than 5");
				}
				if (y == 0)
				{
					printf("and is 0");
				}
				if (y < 6 && y != 0)
				{
					printf("and is less than 6 and not 0");
				}
				printf("\n");
				return (0);
}