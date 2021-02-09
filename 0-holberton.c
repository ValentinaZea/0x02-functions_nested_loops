#include "holberton.h"

/**
 *  main - Print a message
 *
 * Return: 0
 */
int main(void)
{
	char holbie[] = "Holberton\n";
	int i;

	for (i = 0 ; i < 11 ; i++)
	{
	_putchar(holbie[i]);
	i++;
	}
	return (0);
}
