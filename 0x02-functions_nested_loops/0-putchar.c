#include <stdio.h>
/**
 * main - Print "_putchar" followed by a new line.
 * Description: The program should return 0
 * Return: 0
 */
int main(void)
{
char holberton[] = "Holberton";
int i = 0;
while (holberton[i] != '\0')
{
_putchar(holberton[i]);
i++;
}
_putchar('\n');
return (0);
}
