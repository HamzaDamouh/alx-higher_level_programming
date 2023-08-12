#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp;

	if (list == NULL) return (0);
	tmp = list->next;
	while (tmp != NULL)
	{
		if (tmp == list) return (1);
		tmp = tmp->next;
	}

	return (0);
}
