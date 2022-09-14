#include "main.h"

/**
  * print_alphabet -This program prints
  * the english alphabet from a-z.
  * Return: Void.
  */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
