#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - number base
 * a new line
 * Return: 0 success
 */
int main(void)
{
	int n;
	char low;

	for (n = 48; n <= 58; n++)
		putchar(n);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
