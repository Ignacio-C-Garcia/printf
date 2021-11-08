#include "main.h"
/**
 * fun_char - Print va_list
 *@ap: arg
 */

void fun_char(va_list ap)
{
	char aux = va_arg(ap, int);

	if (aux >= 32 && aux <= 126)
	write(1, &aux, 1);
}
