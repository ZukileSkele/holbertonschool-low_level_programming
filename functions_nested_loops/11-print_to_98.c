#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        printf("%d, ", n);
        n > 98 ? n-- : n++;
    }
    printf("%d\n", n);
}
