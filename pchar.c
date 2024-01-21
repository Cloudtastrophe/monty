#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 *
 * Description:
 * Prints the character at the top of the stack, followed by a new line.
 * If the stack is empty, it prints an error message and exits with EXIT_FAILURE.
 * If the value at the top of the stack is not a valid ASCII character,
 * it prints an error message and exits with EXIT_FAILURE.
 *
 * Return: No return value
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
