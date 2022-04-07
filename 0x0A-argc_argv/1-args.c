#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc - arguments counter
 * @argv - pointer to the array of arguments
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv - unused parameter*/
	printf("%d\n", argc - 1); /*don't include the program name*/

	return (0);
}
