#include "monty.h"

/**
 * instr_push - pushes an element to the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_push(stack_t **stack, unsigned int line_number)
{
	stack_t *item = malloc(sizeof(stack_t));
	char *opr;
	int value;

	if (!item)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	opr = strtok(NULL, "\n\t\r ");
	if (opr == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = mdf_strtol(opr, line_number);
	item->n = value;
	item->prev = NULL;
	item->next = *stack;
	if (item->next != NULL)
		(item->next)->prev = item;
	*stack = item;
}
