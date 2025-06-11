#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to print
 *
 * Description: Numbers are separated by comma and space,
 *              and printed in the same order as in the array.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        
        /* Don't print comma and space after last element */
        if (i != n - 1)
            printf(", ");
    }
    
    printf("\n");
}
