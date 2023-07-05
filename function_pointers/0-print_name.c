#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: a function pointer used to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
