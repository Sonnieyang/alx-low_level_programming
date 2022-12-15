#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: if no loop (NULL), or address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog, *cat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	dog = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (dog == cat)
		{
			dog = cat;

			while (dog != cat)
			{
				dog = dog->next;
				cat = cat->next;
			}

			return (dog);
		}

		dog = dog->next;
		cat = (cat->next)->next;
	}

	return (NULL);
}
