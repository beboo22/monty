#include "monty.h"
/**
  *_rotl- rotates
  *@hd: stack head
  *@cntr: counter
  *Return: no return
 */
void _rotl(stack_t **hd,  __attribute__((unused)) unsigned int cntr)
{
	stack_t *tmp = *hd, *ax;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	ax = (*hd)->next;
	ax->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = ax;
}
