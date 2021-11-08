#include <stdio.h>
#include "main.h"
void fun_int(va_list ap)
{

	int number = va_arg(ap, int);
	int aux = 10;
	int counter = 0;
	int var;
	char result;

	if (number < 0)
	{
		write(1, "-", 1);
		number *= (-1);
	}
	while ((number % aux) != number)
	{
		counter++;
		aux = aux * 10;
	}

	var = _pow_recursion(10, counter);

	for (aux = 0; aux <= counter; aux++)
	{
		result = '0' + (number / var) % 10;
		write(1, &result, 1);
		var = var / 10;
	}
}
