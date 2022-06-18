#include "monty.h"

/**
 * instr_swap - swaps the top two elements of the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)(line_number);
	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = temp->next;
	temp->prev = NULL;
	(*stack)->prev = temp;
	if (temp->next)
		temp->next->prev = *stack;
	temp->next = *stack;
	(*stack) = (*stack)->prev;
}
