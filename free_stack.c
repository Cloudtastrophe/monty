#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 *
 * Description: Frees all nodes in a doubly linked list starting from the head.
 */
void free_stack(stack_t *head)
{
    stack_t *aux;

    aux = head;
    while (head)
    {
        aux = head->next;
        free(head);
        head = aux;
    }
}
