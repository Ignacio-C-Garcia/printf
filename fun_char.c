#include "main.h"
/**
 * fun_char - Print va_list
 *@ap: arg
 *Return: 1
 */

int fun_char(va_list ap)
{
	char aux = va_arg(ap, int);

		return (write(1, &aux, 1));
}
