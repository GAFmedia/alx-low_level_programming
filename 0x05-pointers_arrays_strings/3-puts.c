#include "main.h"

/**
  * function that prints a string,
  * followed by a new line, to stdout
  * Return: success
  */

void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
