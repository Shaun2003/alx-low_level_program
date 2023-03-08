#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: the string to print
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_puts_recursion(s);
}
