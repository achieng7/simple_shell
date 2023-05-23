#include "shell.h"

/**
 * _memset - Mem filled with a constant byte
 *
 * @s: Ptr to the mem area
 * @b: Byte to fill *s with
 * @n: Amount of bytes to be filled
 * Return: (s) a ptr to the mem area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - A string of strings freed
 * @pp: Strg of strgs
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Block of mem reallocated
 *
 * @ptr: Ptr to previous malloc block
 * @old_size: Byte size of previous block
 * @new_size: Sizze byte  of new block
 *
 * Return: Ptr to block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}