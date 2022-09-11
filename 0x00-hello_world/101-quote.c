#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 1 (success)
 */
int main(void)
{
	write(STDOUT_FILENO, "AND THAT PIECE OF ART IS USEFUL
			\" - dORA kORPAR, 2015-10-19\n", 59);
	return (1);
}
