nclude "main.h"

/**
  * print_diagonal - Print a diagonal if the number is positive.
  * @n: The character to be count.
  *
  * Return: To the value of c.
  */

void print_diagonal(int n)
{
	int column, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 0; column < n; column++)
		{
			i = column - 1;

			for (space = 0; space <= i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
