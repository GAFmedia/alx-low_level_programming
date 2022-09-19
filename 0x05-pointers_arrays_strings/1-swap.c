#include "main.h"

/**
  * function that swaps the values of two integers.
  *
  * Return: success
  */

void swap_int(int *a, int *b);
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
