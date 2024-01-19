#include "monty.h"

/**
 * f_push - add element to the stack
 * @head: stack head
 * @counter: line_number
 *
 * Description: Adds a node to the stack with the specified integer value.
 * If the argument is not an integer, it prints an error message and exits.
 *
 * Return: No return value
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n, j = 0, flag = 0;

    if (bus.arg)
    {
        if (bus.arg[0] == '-')
            j++;
        for (; bus.arg[j] != '\0'; j++)
        {
            if (bus.arg[j] > 57 || bus.arg[j] < 48)
                flag = 1;
        }
        if (flag == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    n = atoi(bus.arg);
    if (bus.lifi == 0)
        addnode(head, n);
    else
        addqueue(head, n);
}

/**
 * f_pall - prints the values on the stack
 * @head: stack head
 * @counter: no used
 *
 * Description: Prints all elements of the stack.
 *
 * Return: No return value
 */

void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;

    h = *head;
    if (h == NULL)
        return;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
