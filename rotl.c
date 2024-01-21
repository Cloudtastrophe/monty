#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 *
 * Description:
 * Rotates the stack to the top. The top element becomes the last one,
 * and all other elements move up one position.
 *
 * Return: No return value
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
