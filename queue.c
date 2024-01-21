#include "monty.h"

/**
 * f_queue - sets the stack to queue mode
 * @head: stack head
 * @counter: line_number
 *
 * Description:
 * Sets the stack to queue mode. In queue mode, elements are
 * added to the tail of the stack.
 *
 * Return: No return value
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds a node to the tail of the stack
 * @n: new_value
 * @head: head of the stack
 *
 * Description:
 * Adds a new node with the given value to the tail of the stack.
 *
 * Return: No return value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
