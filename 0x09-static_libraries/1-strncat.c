#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: return 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
