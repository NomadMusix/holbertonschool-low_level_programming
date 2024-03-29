#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t.
 * @head: pointer to head of list
 *
 * Return: sum of all data (n) of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
