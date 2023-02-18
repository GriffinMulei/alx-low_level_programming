#include <stdio.h>

/**
 * main - Display the alphabet letters.
 * Return: 0 (Run successful).
 *
 */

int main(void)
{
	char alphabetLetter;

	for (alphabetLetter = 'a'; alphabetLetter <= 'z'; alphabetLetter++)
	putchar(alphabetLetter);
	putchar('\n');
	return (0);
}
