#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index of the bit
 * Return: value of bit at index, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n >> index & 1);
}
