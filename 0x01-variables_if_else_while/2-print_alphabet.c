#include <stdio.h>
#include <ctype.h>

/**
     * main - prints the alphabet in lowrcase
     * Return: 0
     */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);
}
