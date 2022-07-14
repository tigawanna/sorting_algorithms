#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */

void insertion_sort_list(listint_t **list)
{
listint_t *key = NULL, *prev_prev = NULL, *prev_key = NULL, *curr_key = NULL,
*next_key = NULL;
if (!list || !(*list) || (*list)->next == NULL)
return;
key = *list;

while (key)
{
if (key->prev && key->n < key->prev->n)
{
prev_prev = key->prev->prev;
prev_key = key->prev;
curr_key = key;
next_key = key->next;
prev_key->next = next_key;
if (next_key)
{
next_key->prev = prev_key;
}
curr_key->next = prev_key;
curr_key->prev = prev_prev;
if (prev_prev)
prev_prev->next = curr_key;
else
*list = curr_key;

prev_key->prev = curr_key;
key = *list;
continue;
}
else
key = key->next;
}
}
