#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 *
 * Description:
 * Computes the remainder of the division of the second
 * top element of the stack by the top element of the stack.
 * The result is stored in the second element, and the top element
 * is removed. If the stack has fewer than two elements, it prints
 * an error message and exits with EXIT_FAILURE. If the top element
 * is zero, it prints an error message and exits with EXIT_FAILURE.
 *
 * Return: No return value
 */
void f_mod(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    h = *head;
    while (h)
    {
        h = h->next;
        len++;
    }

    if (len < 2)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    h = *head;
    if (h->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    aux = h->next->n % h->n;
    h->next->n = aux;
    *head = h->next;
    free(h);
}
