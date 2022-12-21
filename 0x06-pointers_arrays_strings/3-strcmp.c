#include "main.h"
/**
 * _strcmp - Compares pointers to two strings
 * @s1: A ponter to the first string to be compared
 * @s2: A ponter to the second string to be compared
 *
 * Return: If str1 < str2, the negative diffeernce of
 * the first unmatched characters
 * if str1 == str2, 0.
 * if str1 > str2, the positive differnce of the first unmatched charcaters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
