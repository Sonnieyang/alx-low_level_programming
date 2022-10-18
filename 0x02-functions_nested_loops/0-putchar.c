#include "putchar.h"

/**
 * main - prints putchar
 *
 * Return: 0
 */

int main(void)
{
	char text[8] = "putchar";
	int i = 0;

	for (i = 0; i < 7; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
