#include "main.h"

/**
 * my_str - Function that outputs string
 * @str: String to be printed
 *
 * Description: Mainly for printing arrays of strings
 */

void my_str(char *str)
{
	while (*str != '\0')
	{
		my_putchar((int)(*str));
		str++;
	}
}
