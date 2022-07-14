#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * main - entry pount
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
