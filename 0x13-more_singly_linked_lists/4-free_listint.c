#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head node
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}4-free_listint.c" [New File]                                    0,0-1         All

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~


