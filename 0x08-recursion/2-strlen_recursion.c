#include "main.h"

/**
  * _strlen_recursion - gets length of a string
  * @s: the string
  * @len: string lenth
  * Return: length of the string
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if  (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
