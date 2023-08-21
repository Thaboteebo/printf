#include "main.h"

/**
 * my_putchar - Function for printing characters
 * @ch: Character to be printed
 *
 * Return: Number of characters written
 */

int my_putchar(int ch)
{
	return (write(1, &ch, 1));
}
