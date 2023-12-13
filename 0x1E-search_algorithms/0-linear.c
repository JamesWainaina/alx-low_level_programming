#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Write a function that searches for a value in an array of integers using the Linear search algorithm
 * Where array is a pointer to the first element of the array to search in
 * size is the number of elements in array
 * And value is the value to search for
 * Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must return -1
 * Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
 * 
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array || size == 0)
            return (-1);
    
    while (i < size)
    {
        printf("Value checked array[%lu] = [%d]\n",i,array[i]);
        if (array[i] == value)
                return (i);
        i++;
    }

    return (-1);
    
}