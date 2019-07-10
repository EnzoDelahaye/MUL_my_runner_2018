/*
** EPITECH PROJECT, 2018
** anim_jump
** File description:
** 2018
*/

#include "../../include/libmy.h"

int anim_jump(t_sprite *charac, float *pos_y, float *access, sfIntRect *rect)
{
    sfMusic *soundjump;
    sfVector2f jump = {74, *pos_y};
    sfVector2f idle = {0, 0};

    if (*access > 0) {
        *pos_y -= 10;
        *access += 0.4;
        if (*access >= 15) {
            *pos_y += 20;
            if (*pos_y >= 595) {
                *access = 0;
            }
        }
        rect->left = 3225;
    }
    sfSprite_setPosition(charac->sprite, jump);
}