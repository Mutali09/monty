#include "monty.h"

/**
 * custom_add_function - adds the top two elements of the stack
 * @head: head
 * @counter: line_number
 * Return: nothing
 */
void custom_add_function(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	for (h = *head; h; h = h->next)
	{
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
