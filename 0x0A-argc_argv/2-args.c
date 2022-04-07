#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: arguments counter
 * @argv: pointer to the array of arguments
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
