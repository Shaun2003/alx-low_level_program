#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print namer using pointer to function
 * @name: string to function
 * Return: string
 */
void print_name(char *name, void (*f)(char*))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
