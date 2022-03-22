#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, product, tens, unit;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			unit = product % 10;

			if (column == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (product <= 9)
			{
				_putchar(' ');
				_putchar('0');
				_putchar(unit + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}
	}
	_putchar('\n');
}
