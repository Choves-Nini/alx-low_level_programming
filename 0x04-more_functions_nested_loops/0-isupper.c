#include "main.h"

/**
* 0-isupper.c - verifying uppercase numbers
*
* Return: 1 if positive and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
