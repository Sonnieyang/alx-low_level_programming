#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int h, tri;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (tri = n - h; tri > 0; tri--)

				_putchar(' ');

			for (tri = 0; tri < h; tri++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n);
		}
	}

	putchar('\n');
}
