#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of needle in haystack
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}

