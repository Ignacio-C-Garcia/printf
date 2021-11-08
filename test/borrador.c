#include <stdio.h>
#include "main.h"
int fun_int(va_list ap)
{

	int number = va_arg(ap, int);
	int aux = 10;
	int counter = 0;
	int var;

	while ((number % aux) != number)
	{
		counter++;
		aux = aux * 10;
	}

	var = _pow_recursion(10, counter);

	for (aux = 0; aux <= counter; aux++)
	{
		printf("%d", (number / var) % 10);
		var = var / 10;
	}
return (counter + 1);
}
