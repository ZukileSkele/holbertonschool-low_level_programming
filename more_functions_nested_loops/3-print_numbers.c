#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char nums[] = "0123456789";

	int i = 0;

	while (nums[i] != '\0')
	{
		_putchar(nums[i]);
		i++;
	}
	_putchar('\n');
}
