#include "main.h"

/**
  *function that prints a string,
  *in reverse
  *followed by a new line
  *Retun: success
  */

void print_rev(char *s);
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}