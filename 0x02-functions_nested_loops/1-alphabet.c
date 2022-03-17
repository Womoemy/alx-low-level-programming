#include "main.h"

/**
 * print_alphabet - entry point
 * Description: function that prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
