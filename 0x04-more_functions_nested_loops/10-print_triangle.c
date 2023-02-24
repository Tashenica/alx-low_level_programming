#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according parameter
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int i;
	char a[] = "Fizz";
	char b[] +"Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; 1 <= 100; i++)
	{
	if (i == 100)
	printf("%s", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
	printf("%s", ab);
	else if (i % 3 == 0)
	printf("%s", a);
	else if (i % 5 == 0)
	printf("%s", b);
	else
	printf("%d", i);
	}
	printf("\n");
}
