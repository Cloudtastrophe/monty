#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 *
 * Description:
 * Prints the string starting at the top of the stack. It continues
 * printing characters until it reaches a null byte or a non-printable
 * ASCII character. The newline character is printed at the end.
 *
 * Return: No return value
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
