#include "main.h"

/**
* times_table - prints the 9 times table starting with 0
*/

void times_table(void)
{
	int num1;
	int num2;
	int prod;

	num1 = 0;
	num2 = 0;
	prod = num1 * num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			_putchar(prod + '0');
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');

	}
}
