#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing out the alphabet letter excluding q and e.
 * Return: 0 (Run successful)
 *
 */

int main(void)
{
	char alphabet, letter_E, letter_Q;

	letter_E = 'e';
	letter_Q = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != letter_E && alphabet != letter_Q)
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
