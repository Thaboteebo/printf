#include "main.h"

/**
 * my_str - Function that outputs string
 * @str: String to be printed
 * Return: 0 on success
 * Description: Mainly for printing arrays of strings
 */

int my_str(char *str)
{
	while (*str != '\0')
	{
		my_putchar((int)(*str));
		str++;
	}
	return (0);
}
