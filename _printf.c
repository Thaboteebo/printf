#include "main.h"

/**
 * _printf - Function the reads and output arguments
 * @format: Pointer to character array
 *
 * Return: Printed_char
 */

int _printf(const char *format, ...)
{
	int printed_char = 0, f_printed;

	va_list(args_p);

	if (format == NULL)
		return (-1);

	va_start(args_p, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			f_printed = f_spec(args_p, *format);

			if (f_printed == -1)
			{
				va_end(args_p);
				return (-1);
			}
			printed_char += f_printed;
		}
		else
		{
			my_putchar(*format);
			printed_char++;
		}
		format++;
	}
	va_end(args_p);

	return (printed_char);
}
