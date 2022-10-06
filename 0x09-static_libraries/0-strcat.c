#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i = 0;

	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}

	for (i = 0; i <= srclen; i++)
		dest[destlen + 1] = src[i];

	return (dest);
}
