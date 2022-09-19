#include "main.h"

/**
* _strlen - function to determine length of a string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
