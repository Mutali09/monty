#include "monty.h"

/**
 * custom_pop_function -  top element of the stack
 * @head: head of the stack
 * @counter: line_number
 * Return: nothing
 */
void custom_pop_function(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
