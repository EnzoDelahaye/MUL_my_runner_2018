/*
** EPITECH PROJECT, 2018
** create_sprite
** File description:
** 2018
*/

#include "../include/libmy.h"

t_sprite *create_sprite(char const *filepath)
{
    t_sprite *layer = malloc(sizeof(t_sprite));

    layer->texture = sfTexture_createFromFile(filepath, NULL);
    layer->sprite = sfSprite_create();

    sfSprite_setTexture(layer->sprite, layer->texture, sfTrue);
    return (layer);
}