#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new element (node), or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL); /* Allocation failed, return NULL */

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node); /* Free allocated memory for the node */
		return (NULL);    /* Return NULL if string duplication fails */
	}

	new_node->len = strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	list_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}

