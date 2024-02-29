/*
** EPITECH PROJECT, 2024
** dragusheen linked_list-library
** File description:
** library
*/

#include "dlist.h"

void dl_apply_data(lnode_t *head, void func(void *))
{
    for (; head != NULL; head = head->next)
        func(head->data);
}
