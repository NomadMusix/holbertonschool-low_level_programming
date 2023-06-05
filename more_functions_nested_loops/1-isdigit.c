#include "main.h"
/**
 * main _isdigit checks if char is a digit (0-9)
 * @c: the charater to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
