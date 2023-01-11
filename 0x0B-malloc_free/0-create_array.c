/*
 * file: 0-malloc_checked.c
 * Auth: Brennan D baraban
 */
#include "main.h"
#include  <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memeory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocatewd memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
