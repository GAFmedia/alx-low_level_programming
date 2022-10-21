#include <stdio.h>

/* Using constructors in C */
void main_constructor(void) __attribute__((constructor));
/**
 *  * main_constructor - A constructor function that prints a message
 *   * before main runs
 *    * Return: Nothing
 */
void main_constructor(void)
{
	printf("Afolake, you are the best! you got this, you must win,\n");
	printf("Nations await you, Afolake!\n");
}
