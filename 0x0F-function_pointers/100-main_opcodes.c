#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int bytes, 1;
	char *arr;

	if (arg != 2)
	{
		printf("Error\p");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("error\n");
		exit(2);
	}
	arr = (char *)main;
	for  (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	return (0);
}
