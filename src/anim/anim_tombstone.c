/*
** EPITECH PROJECT, 2019
** anim_tombstone
** File description:
** 2018
*/

#include "../../include/libmy.h"

int anim_tombstone(sfRenderWindow *window, float *x8, t_sprite *tombstone)
{

    sfVector2f pos = {*x8 + 2000, 850};
    sfVector2f reset = {0, 0};

    sfSprite_setPosition(tombstone->sprite, pos);
}
