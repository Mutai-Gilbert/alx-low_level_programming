#include "gilbert.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: The program should return 0
 * Return: 0
 */
int main(void)
{
char gil[] = "_putchar";
int i = 0;
while (gil[i] != '\0')
{
_putchar(gil[i]);
i++;
}
_putchar('\n');
return (0);
}