#include <stdio.h>
#include <stdlib.h>
#include "sort.h"



void swap(int *p, int *n)
{
    int temp = *p;
    *p = *n;
    *n = temp;
}
void bubble_sort(int *array, size_t size)
{
    size_t k, b;

    if (array == NULL || size == 0)
        return;

    for (k = 0; k < size - 1; k++)
    {
        for (b = 0; b < size - 1; b++)
        {
            if (array[b] > array[b + 1])
            {
                swap(&array[b], & array[b + 1]);
                print_array(array, size);
            }            
        }
    }
    
}


