#include <stdio.h>
/**
 * main - prints all th numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(44);
			putchar(' ');
			n++;
		}
	}

	return (0);
}
