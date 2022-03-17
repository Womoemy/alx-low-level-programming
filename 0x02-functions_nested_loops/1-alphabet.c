#include "main.h"

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0 (success)
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

	return;
}
