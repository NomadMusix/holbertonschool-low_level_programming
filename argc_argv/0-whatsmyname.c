#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program followed by a newline
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
