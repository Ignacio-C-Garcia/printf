#include "main.h"
int main(void)
{
	char *name = "Juan Carlos";
	char censura = 64;
	unsigned int age = 10;

	_printf("hola %s como estas chupa pij%c", name, censura);
	printf("\n");
	_printf("%s tiene %u años de edad, su primo tiene %u tmb", name, age, 99);
	printf("\n");
	return (0);
}
