#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print out numbers.
 * Return: 0 (Run successful)
 *
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
