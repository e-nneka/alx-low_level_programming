#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;

	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		i++;
	}
	b = s1[a] - s2[a];
	return (b);
}
