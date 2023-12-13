#include "monty.h"
/**
 * f_queue - this prints the top
 * @head: stack head
 * @ln_num: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int ln_num)
{
	(void)head;
	(void)ln_num;
	bus.lifi = 1;
}

/**
 * addqueue - this adds a node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
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
