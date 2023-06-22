#include "monty.h"
/**
 * anode - add node
 * @_head: head
 * @n: new value
 * Return: no return
*/
void anode(stack_t **_head, int n)
{
	stack_t *new_node, *aux;

	aux = *_head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *_head;
	new_node->prev = NULL;
	*_head = new_node;
}
