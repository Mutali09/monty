#include "monty.h"

/**
 * custom_pall_function - prints the stack
 * @head: head
 * @counter: not used
 * Return: nothing
 */
void custom_pall_function(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
