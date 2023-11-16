#include "monty.h"

/**
 * custom_pint_function - prints the value at the top of the stack, followed by a new line
 * @head: head
 * @counter: line_number
 * Return: nothing
 */
void custom_pint_function(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
