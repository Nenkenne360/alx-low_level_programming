#include "main.h"
/**
 * _isalpha - check alphabetic charactern
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
