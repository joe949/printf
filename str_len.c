#include "main.h"
/**
 * _strlen - function that prints the length of a string
 * @s: string pointer
 *
 * Return: 1
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * con_strlen - applies to a constant char pointer
 * @s: char pointer
 *
 * Return: 1
 */
int con_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
