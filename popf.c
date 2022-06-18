#include "monty.h"

/**
 * instr_pop - removes the top element of the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *item;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	item  = *stack;
	(*stack) = (*stack)->next;
	free(item);
}
