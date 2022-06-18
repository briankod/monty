#include "monty.h"

/**
 * instr_pstr - prints the string starting at the top of the stack.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)(line_number);
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	while (temp != NULL)
	{
		if (isascii(temp->n) && temp->n != 0)
			putchar(temp->n);
		else
			break;
		temp = temp->next;
	}
	putchar('\n');
}
