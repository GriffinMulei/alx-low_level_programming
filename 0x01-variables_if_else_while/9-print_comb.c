#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - printing nnumbers and separate them by comma.
 * Return: 0 (Run seccessfull)
 *
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
