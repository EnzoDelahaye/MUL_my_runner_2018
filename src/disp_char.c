/*
** EPITECH PROJECT, 2018
** disp_char
** File description:
** 2018
*/

#include "../include/libmy.h"

void disp_charac(sfRenderWindow *window, t_sprite *charac, sfIntRect rect)
{
    sfSprite_setTexture(charac->sprite, charac->texture, sfTrue);
    sfSprite_setTextureRect(charac->sprite, rect);
    sfRenderWindow_drawSprite(window, charac->sprite, NULL);
}