#include "sort.h"

/**
 * swap_node - Swap two nodes in a listint_t doubly-linked list.
 * @head: pointer to the head of the doubly linked list.
 * @curr: current node to be swaped
 * @prev: pointer
 */
void swap_node(listint_t *curr, listint_t *prev, listint_t **head)
{
	listint_t *swap_1 = curr->next;
	listint_t *swap_2 = prev->prev;

	if (swap_1 != NULL)
		swap_1->prev = prev;
	if (swap_2 != NULL)
		swap_2->next = curr;
	curr->prev = swap_2;
	prev->next = swap_1;
	curr->next = prev;
	prev->prev = curr;
	if (*head == prev)
		*head = curr;
	print_list(*head);
}
/**
 * insertion_sort_list - Sorts a doubly linked using the
 *              insertion sort methode
 * @list: pointer to the head of a doubly-linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL;
	listint_t *prev = NULL;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;

	curr = (*list)->next;
	prev = curr->prev;
	while (curr != NULL)
	{
		prev = curr->prev;
		while (prev != NULL && prev->n > curr->n)
		{
			swap_node(curr, prev, list);
			prev = curr->prev;
		}
		curr = curr->next;
	}
}
