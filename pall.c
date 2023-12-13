#include "monty.h"
/**
 * f_pall - prints all that's in the stack
 * @head: stack head
 * @ln_num: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int ln_num)
{
	stack_t *h;
	(void)ln_num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
