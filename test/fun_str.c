#include "main.h"
void fun_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int aux;

	for (aux = 0; str[aux] != 0; aux++)
	{
		write(1, str + aux, 1);
	}
}
