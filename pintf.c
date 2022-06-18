#include "monty.h"

/**
 * instr_pint - prints the value at the top of the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Usage: pint
 * Return: Nothing
 */
void instr_pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
