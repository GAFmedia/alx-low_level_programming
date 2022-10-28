#include "main.h"

/**
 *  * get_endianness - A function that checks endianness
 *   * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
		unsigned int Adefioye = 1;
			char *Afolake = (char *)&Adefioye;

			if (*Afolake)
				return (1);
			return (0);
}
