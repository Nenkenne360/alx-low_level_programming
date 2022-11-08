#include "main.h"

/**
 * _islower - check for lowercase character
 *
 *  @c: character to compare
 *
 * Return: 1 is c is lowercase otherwise 0.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

