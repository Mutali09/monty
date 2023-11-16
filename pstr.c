#include "monty.h"

/**
 * custom_pstr_function - outputs the string starting at the top of the stack
 * @head; head
 * @counter: line_number
 * Return: nothing
 */
void custom_pstr_function(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	for (h = *head; h && (h->n > 0 && h->n <= 127); h = h->next)
	{
		printf("%c", h->n);
	}
	printf("\n");
}
