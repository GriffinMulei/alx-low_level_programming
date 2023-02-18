#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing number in base 16.
 * Return: 0 (Run successful)
 *
 */

int main(void)
{
	char letters;
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');

	return (0);
}
