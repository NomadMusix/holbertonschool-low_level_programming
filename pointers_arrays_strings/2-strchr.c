#include "main.h"
#include <stddef.h>
/**
 * * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurence of character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	
	return (NULL);
}
