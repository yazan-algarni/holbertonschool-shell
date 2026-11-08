#include<stdio.h>
/**
* main - method print charecter from a to z
*
* Return: always 0 (Seccess)
*/
int main(void)
{
        int i;

        for (i = 97 ; i < 123 ; i++)
                putchar(i);

	for (i = 65 ; i < 91 ; i++)
		putchar(i);

        putchar('\n');
        return (0);
}




