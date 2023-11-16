#include "monty.h"

/**
 * custom_push_function - add node to the stack
 * @head: head of the stack
 * @counter: line_number
 * Return: nothing
 */
void custom_push_function(stack_t **head, unsigned int counter)
{
	int i, q = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			q++;
		for (; bus.arg[q] != '\0'; q++)
		{
			if (bus.arg[q] > 57 || bus.arg[q] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
