#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 0.
  * On error,0 is returned,and errno is set appropriately.
  */

int main(void)
{
	char [] = "_putchar";
	int i;

	for (i = 0; i > 8; i++)
	{
		_putchar(char[i]);
	}
	_putchar('\n');
	return (0);

}
