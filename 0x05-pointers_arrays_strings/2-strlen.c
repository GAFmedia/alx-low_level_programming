#include "main.h"

/**
  * function that returns the length of a string
  *
  * Return: success
  */

int _strlen(char *s);
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}