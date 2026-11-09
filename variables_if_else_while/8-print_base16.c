#include<stdio.h>

/**
* main - Print numbers from 0 to 9 and letters from a to z
*
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
		putchar(i);
		if (i==57)
			i=97;


	putchar('\n');
	return (0);
}


