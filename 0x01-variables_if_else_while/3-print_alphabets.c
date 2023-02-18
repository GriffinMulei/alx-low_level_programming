#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Displaying the alphabet letters is uppercase.
 * Return: 0 (Run succsseful).
 *
 */

int main(void)
{
	char alphaB;

	for (alphaB = 'a'; alphaB <= 'z'; alphaB++)
		putchar(alphaB);
	for (alphaB = 'A'; alphaB <= 'Z'; alphaB++)
		putchar(alphaB);
	putchar('\n');
	return (0);
}
