#include "main.h"
int main(void)
{
	char *name = "Juan Carlos";
	char censura = '*';
	unsigned int age = 10;

	_printf("hola %s como estas chu%c%c pij%c", name, censura, censura, censura);
	printf("\n");
	_printf("%s tiene %u años de edad, su primo tiene %u tmb", name, age, 99);
	printf("\n");
	_printf("probando el %% doble");
	return (0);
}
