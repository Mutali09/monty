#include "monty.h"

/**
 * custom_rotr_function - rotates the stack to the bottom
 * @head: head of the stack
 * @counter: line_number
 * Return: nothing
 */
void custom_rotr_function(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	for (; copy->next; copy = copy->next)
	{
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
