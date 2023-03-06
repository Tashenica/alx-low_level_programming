#include "main.h"

/**
 * _strspn - Search a string for a set of bytes
 * @s: source string
 * @accept: accept string
 *
 * Return: Number of bytes in the init segent
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a]0)
	{
	b = 0;
	while (s[b] != 32)
	{
	if (accept[a] == s[b])
	{
	t++;
	}
	b++
	}
	a++
	}
	return (t);
}
