#include "main.h"

/**
 * _puts - print a string to stdout with a new line at the end
 * @str: char array is of  string type
 * Description: We can only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
