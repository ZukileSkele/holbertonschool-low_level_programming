#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
    int len = 0;

    /* Find string length */
    while (s[len] != '\0')
        len++;

    /* Print in reverse */
    while (len > 0)
        _putchar(s[--len]);

    _putchar('\n');
}
