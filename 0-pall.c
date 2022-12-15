#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void pop(stack_t **head, unsigned int line_number)
{
	stack *h;

	h = *head;

	if(h == NULL)
	{
		return;
	}

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
