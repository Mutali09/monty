#include "monty.h"

/**
 * exec - function that executes the opcode
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: pointer to the monty file
 * @content: line content
 * Return: nothing
 */
int exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	unsigned int i = 0;
	char *op;
	instruction_t opst[] = {
		{"push", custom_push_function}, {"pall", custom_pall_function}, {"pint", custom_pint_function},
		{"pop", custom_pop_function},
		{"add", custom_add_function},
		{"swap", custom_swap_function},
		{"sub", custom_sub_function},
		{"nop", custom_nop_function},
		{"div", custom_div_function},
		{"mod", custom_mod_function},
		{"mul", custom_mul_function},
		{"pchar", custom_pchar_function},
		{"pstr", custom_pstr_function},
		{"rotr", custom_rotr_function},
		{"stack", custom_stack_function},
		{"queue", custom_queue_function},
		{NULL, NULL}
	}
	};

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
