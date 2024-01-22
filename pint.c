#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @head: stack head
 * @counter: line_number
 *
 * Description: Prints the value at the top of the stack, followed by a new line.
 * If the stack is empty, it prints an error message and exits with EXIT_FAILURE.
 *
 * Return: No return value
 */
void f_pint(stack_t **head, unsigned int counter)
{
    stack_t *top = *head;

    if (top == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", top->n);
}
