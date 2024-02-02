#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);   /* Free the string (if not NULL) */
		free(current);        /* Free the current node */
		current = next;       /* Move to the next node */
	}
}
