#include "main.h"

/**
* _isdigit - verifying digits
* @c: is the int that will be used for the argument in the function
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else
		return (0);
}
