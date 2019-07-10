/*
** EPITECH PROJECT, 2019
** score
** File description:
** 2018
*/

#include "../../include/libmy.h"

int print_score(sfRenderWindow *window, int *scr)
{
    *scr += 1;
    print_text(window, "Score:", 5, 6);
    print_text(window, my_int_to_str(*scr), 20, 80);
}