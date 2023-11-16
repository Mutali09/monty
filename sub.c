#include "monty.h"

/**
 * custom_sub_function - subtracts the top element of the stack from the second top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
 */
void custom_sub_function(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	nodes = 0;
	while (aux != NULL)
	{
		nodes++;
		aux = aux->next;
	}
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
