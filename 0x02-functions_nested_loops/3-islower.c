#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c - parameter
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
