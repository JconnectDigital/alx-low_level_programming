#include <stdio.h>

/**
 * main - prints all posible numbers of 2 combination digit
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if  (k < j)
		{
			putchar(k + '0');
			putchat(j + '0');
		}
	}
	i++;

	putchar('\;n');
	return (0);
}
