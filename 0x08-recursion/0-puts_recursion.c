#include "main.h"

/**
_puts_recursion - This function prints a string followed by a newline
 *s: The string array to print to standard output
**/

int void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return;

}
_putchar(*s);
_puts_recursion(s + 1);
}
