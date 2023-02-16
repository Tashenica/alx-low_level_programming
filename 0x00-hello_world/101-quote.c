#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char strl[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, strl, 59);
	return (1);
}	
