#include "monty.h"
/**
 * f_pstr - this prints the string starting
 * at the top of the stack,followed by a new
 * @head: stack head
 * @ln_num: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int ln_num)
{
	stack_t *h;
	(void)ln_num;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
