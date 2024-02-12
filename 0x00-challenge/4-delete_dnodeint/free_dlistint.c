#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free_dlistint
 *
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
