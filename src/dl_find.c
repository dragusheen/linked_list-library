/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void *dl_find(lnode_t *head, void *ref, bool cmp(void *, void *))
{
    for (; head != NULL; head = head->next)
        if (cmp(ref, head->data))
            return head->data;
    return NULL;
}
