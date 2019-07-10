/*
** EPITECH PROJECT, 2019
** obstacle
** File description:
** 2018
*/

#include "../../include/libmy.h"

int obstacle(sfRenderWindow *window, t_sprite *tombstone, t_sprite *charac)
{
    if (sfSprite_getPosition(tombstone->sprite).x <=
    sfSprite_getPosition(charac->sprite).x + 0 &&
    sfSprite_getPosition(tombstone->sprite).y <=
    sfSprite_getPosition(charac->sprite).y + 350) {
        t_sprite *end_screen = create_sprite("media/png/lose_screen.png");
        sfRenderWindow_drawSprite(window, end_screen->sprite, NULL);
    }

}