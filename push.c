#include "monty.h"
/**
 * _push - add node
 * @hd: head
 * @cntr: counter
 * Return: no return
*/
void _push(stack_t **hd, unsigned int cntr)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cntr);
			fclose(bus.file);
			free(bus.content);
			free_stack(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		adnode(hd, n);
	else
		adqueue(hd, n);
}
