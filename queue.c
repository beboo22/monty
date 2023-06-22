#include "monty.h"
/**
 * _queue - prints the top
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _queue(stack_t **hd, unsigned int cntr)
{
	(void)hd;
	(void)cntr;
	bus.lifi = 1;
}

/**
 * adqueue - add node
 * @n: value
 * @hd: head
 * Return: no return
*/
void adqueue(stack_t **hd, int n)
{
	stack_t *new_node, *ax;

	ax = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ax->next = new_node;
		new_node->prev = ax;
	}
}
