#include "main.h"

/**
 * -islower - check for lowercase character
 *
 *  @c: character to compare
 *
 * Return: 1 is c is lowercase otherwise 0.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

