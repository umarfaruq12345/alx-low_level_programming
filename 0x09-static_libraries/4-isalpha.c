#include "main.h"

/**
 * _isalpha - Function that check for alphabetic character
 *
 * @c: The character to be checked
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
