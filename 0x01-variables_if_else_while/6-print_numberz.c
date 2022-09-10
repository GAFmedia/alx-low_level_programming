#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * no varable of type char is allowed
 * use putchar function
 */

int main (void)
{

	int d;

	for(d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');
	return (0);
	
}
