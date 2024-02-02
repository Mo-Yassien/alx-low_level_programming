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
	list_t *new_node = malloc(sizeof(list_t));


	if (!head || !new_node)
		return (NULL);


	if (str)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node); /* Free allocated memory for the node */
			return (NULL);    /* Return NULL if string duplication fails */
		}

		new_node->len = _strlen(new_node->str);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
