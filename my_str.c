#include "main.h"

/**
 * my_str - Function that outputs string
 * @str: String to be printed
 * Return: 0 on success
 * Description: Mainly for printing arrays of strings
 */

int my_str(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		my_putchar(*str);
		str++;
		c++;
	}
	return (c);
}
