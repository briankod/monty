#include "monty.h"

/**
 * instr_nop -  doesn’t do anything.
 * @stack: double pointer to head of stack
 * @line_number: line number in bytecode file
 * Return: Nothing
 */
void instr_nop(stack_t **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
}
