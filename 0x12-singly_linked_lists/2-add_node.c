#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newest;
	unsigned int length = 0;

	while (str[length])
		length++;

	newest = malloc(sizeof(list_t));
	if (!newest)
		return (NULL);

	newest->str = strdup(str);
	newest->len = length;
	newest->next = (*head);
	(*head) = newest;

	return (*head);
}
