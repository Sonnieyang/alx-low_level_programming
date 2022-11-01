#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	i = 0;
	j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == acept[j])
			{
				break;
			}
		}

		if (s[i] != accept[j])
			break;
	}
	return (i);
}
