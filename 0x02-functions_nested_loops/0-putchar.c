#include <string.h>
#include "main.h"

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 0.
  * On error,0 is returned,and errno is set appropriately.
  */

int main(void)

{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);

	_putchar('\n');
	return (0);
}
