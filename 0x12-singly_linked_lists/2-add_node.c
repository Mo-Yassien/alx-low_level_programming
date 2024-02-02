#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new element (node), or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL); /* Allocation failed, return NULL */

	/* Duplicate the input string using strdup */
	new_node->str = strdup(str);

	/* Check if string duplication fails */
	if (new_node->str == NULL)
	{
		free(new_node); /* Free allocated memory for the node */
		return (NULL);    /* Return NULL if string duplication fails */
	}

	/* Calculate the length of the string */
	new_node->len = strlen(str);

	/* Update pointers to insert the new node at the beginning of the list */
	new_node->next = *head;
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}

