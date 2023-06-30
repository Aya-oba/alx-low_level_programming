#include <stdlib.h>
#include <string.h> 
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * 
 * Return: number of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
        {
		n++;
		h = h->next;
	}
	return (n);
}
