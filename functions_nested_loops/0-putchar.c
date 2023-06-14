#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar\n";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	return (0);
}
