#include <stdio.h>

/**
 * main - print alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char lCase = 'a';
	char uCase = 'A';

	while (lCase <= 'z')
	{
		putchar(lCase);
		lCase++;
	}
	while (uCase <= 'Z')
	{
		putchar(uCase);
		uCase++;
	}
	putchar('\n');
	return (0);
}
