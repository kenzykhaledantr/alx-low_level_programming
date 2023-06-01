#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newest;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newest = malloc(sizeof(list_t));
	if (!newest)
		return (NULL);

	newest->str = strdup(str);
	newest->len = length;
	newest->next = NULL;

	if (*head == NULL)
	{
		*head = newest;
		return (newest);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newest;

	return (newest);
}
