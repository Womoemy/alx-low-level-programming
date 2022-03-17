#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet, 10 times
 *
 * Description: function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 9)
	{
		char letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');

		i++;
	}
}
