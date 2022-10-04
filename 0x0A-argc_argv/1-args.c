#include "main.h"
#include <stdio.h>

/**
  *  * main - A program that prints the number of arguements you passed into it
  *   * @argc: An argument counter
  *    * @argv: An argument values
  *     * Return: Always 0 (Success)
  */
int main(int argc, __attribute__((unused)) char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
