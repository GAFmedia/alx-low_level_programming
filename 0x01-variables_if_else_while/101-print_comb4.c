#include <stdio.h>

/**
   * main - entry point
   *
   * Return: 0
   */
int main(void)
{
	int c = 0;
	int b;
	int d;
	int f;

	while (c <= 999)
	{
		b = (c / 100 + '0');
		d = (c / 10 % 10 + '0');
		f = (c % 10 + '0');
		if (b < f)
		{
			putchar(b);
			putchar(d);
			putchar(f);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++
	}
		putchar('\n');
		return (0);
}
