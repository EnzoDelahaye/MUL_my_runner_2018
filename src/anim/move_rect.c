/*
** EPITECH PROJECT, 2018
** move_rect
** File description:
** 2018
*/

#include "../../include/libmy.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    int val = rect->left + offset;

    if (val < max_value)
        rect->left = rect->left + offset;
    else
        rect->left = 0;
}