#include "main.h"
/**
 * main -  isupper - checks if character is uppercase
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
