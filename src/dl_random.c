/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void *dl_random_data(lnode_t *head)
{
    int index = 0;

    if (head == NULL)
        return;
    srand(time(NULL));
    index = rand() % dl_length(head);
    return dl_get_data(head, index);
}

lnode_t *dl_random_node(lnode_t *head)
{
    int index = 0;

    if (head == NULL)
        return;
    srand(time(NULL));
    index = rand() % dl_length(head);
    return dl_get_node(head, index);
}
