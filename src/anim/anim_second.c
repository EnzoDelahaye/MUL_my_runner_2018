/*
** EPITECH PROJECT, 2018
** layer2
** File description:
** 2018
*/

#include "../../include/libmy.h"

int anim_second(sfRenderWindow *window, float x, t_sprite *layer2)
{
    sfVector2f pos = {x, 0};
    sfVector2f reset = {0, 0};

    sfSprite_setPosition(layer2->sprite, pos);
}