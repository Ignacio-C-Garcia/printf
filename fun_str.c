#include "main.h"

/**
 * fun_str - Prints string
 *@ap: argument of va_list
 *Return: number of characters printed
 */

int fun_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int aux;
	int counter = 0;

	if (str)
	for (aux = 0; str[aux] != 0; aux++)
	{
		counter += write(1, str + aux, 1);

	}
	else
		counter += write(1, "(null)", 6);
	return (counter);
}
