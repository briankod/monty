#include "monty.h"

/**
 * instr_pchar - prints the char at the top of the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_pchar(stack_t **stack, unsigned int line_number)
{
	int i;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	if (!(i >= 0 && i <= 127))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(i);
	putchar('\n');
}
