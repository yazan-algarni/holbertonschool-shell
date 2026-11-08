#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase,
 * followed by a new line
 *
 * Return: Always 0
 */

 int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || 'q')
			continue;

		putchar(i);
	}

	putchar('\n');
	return (0);

}
