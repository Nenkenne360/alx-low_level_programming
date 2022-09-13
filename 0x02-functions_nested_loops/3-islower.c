#include "main.h"

/**
 * 3-islower.c - check for lowercase character
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

