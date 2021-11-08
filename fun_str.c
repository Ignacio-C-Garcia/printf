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

	for (aux = 0; str[aux] != 0; aux++)
	{
		write(1, str + aux, 1);
		counter++;
	}
	return (counter);
}
