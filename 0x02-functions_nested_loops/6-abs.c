#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: integer whose absolute value is to be computed
 *
 * Return: an integer
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
