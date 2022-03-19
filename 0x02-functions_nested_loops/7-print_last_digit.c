#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number whose last digit is to be printed
 *
 * Description: d represents the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		n *= -1;

	_putchar('0' + d);

	return (d);
}
