#include "main.h"
void fun_char(va_list ap)
{
	char aux = va_arg(ap, int);

	write(1, &aux, 1);
}
