#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - printing alphabet in lowercase and reversing it.
 * Return: 0 (Run successful).
 *
 */

int main(void)
{
	char reverseAlphabets;

	for (reverseAlphabets = 'z'; reverseAlphabets >= 'a'; reverseAlphabets--)
		putchar(reverseAlphabets);
	putchar('\n');

	return (0);
}
