#include "shell.h"

/**
 * _strlen - Length of a returned string.
 * @s: Length of strg to check
 *
 * Return: Int length of the string
 */

int _strlen(char *s)
{
	int y = 0;

	if (!s)
		return (0);

	while (*s++)
		y++;
	return (y);
}

/**
 * _strcmp - Comparison of the two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: - if s1 < s2, + if s1 > s2, 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - starts with haystack
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: address of next char of haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Two concanated strings.
 * @dest: Destination buffer
 * @src: Source buffer
 *
 * Return: pointer to dest buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}