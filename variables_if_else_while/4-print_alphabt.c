#include <stdio.h>

/**
 * main - prints the lowercase alphabet, except q and e,
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}
