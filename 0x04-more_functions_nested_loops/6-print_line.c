#include "main.h"

/**
 *  * print_line - draws a stright line in thr terminal
 *   * @n: number of underscores
 *    * Description: use _putchar to print only
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
	_putchar('_');
	c++;
	}
	_putchar ('\n');
}
