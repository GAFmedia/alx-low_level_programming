#include <stdio.h>

/**
   * main - prints the alphabet in lowercase, followed by a new line
   * You can only use the putchar
   * Return: 0
   */

int main(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		if (lw == 'e' || lw == 'q')
		{
			lw += 1;
		}
		else
		{
			putchar(lw);
			lw += 1;
		}
	}
	putchar('\n');
	return (0);
}
