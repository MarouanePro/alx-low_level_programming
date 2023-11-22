#include "lists.h"
#include <stdlib.h>

int sum_dlistint(dlistint_t *head)
{
	int res;

	res = 0;
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
