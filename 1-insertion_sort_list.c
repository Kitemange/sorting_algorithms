#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the insertion sort algorithm
 * @list: The list to be sorted
 *
 * Return: No return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1, *tmp2, *x1, *x2;
	int flag;

	if (list)
	{
		temp1 = *list;
		tmp2 = *list;
		while (list && temp1->next)
		{
			if (temp1->next)
			{
				flag = 0;
				tmp2 = temp1;
				while (tmp2 && tmp2->n > tmp2->next->n)
				{
					x1 = tmp2;
					x2 = tmp2->next;
					x1->next = x2->next;
					if (x2->next)
						x2->next->prev = x1;
					if (x2)
					{
						x2->prev = x1->prev;
						x2->next = x1;
					}
					if (x1)
						x1->prev = x2;
					if (x2->prev)
						x2->prev->next = x2;
					tmp2 = x2->prev;
					if (!x2->prev)
						*list = x2;
					print_list(*list);
					flag = 1;
				}
			}
			if (flag == 0)
				temp1 = temp1->next;
		}
	}
}
