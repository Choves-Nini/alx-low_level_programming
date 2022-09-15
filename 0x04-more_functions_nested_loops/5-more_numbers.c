#include "main.h"

/**
* void more_numbers - prints x10 the numbers 0 - 14
*
*Return: 0
*/

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}

}
