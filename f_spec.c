#include "main.h"

/**
 * f_spec - Function that selects placeholders
 * @args_p: Va_list agrs_p
 * @specifier: Character after % symbol e.g 'c','d'
 *
 * Return: Argument value pointed by the character
 *
 * Description: This function is use in selecting the
 * excat value after % symbol.
 */

int f_spec(va_list args_p, char specifier)
{
	if (specifier == 'c')
	{
		my_putchar(va_arg(args_p, int));
	}
	else if (specifier == 's')
	{
		my_str(va_arg(args_p, char*));
	}
	else
	{
		my_putchar('%');
	}
	return (specifier);
}
