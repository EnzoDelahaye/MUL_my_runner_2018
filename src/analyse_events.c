/*
** EPITECH PROJECT, 2018
** analyse_events
** File description:
** 2018
*/

#include "../include/libmy.h"

void analyse_events(sfRenderWindow *window, sfEvent event, t_sprite *charac,
float *access)
{
    sfMusic *soundjump;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyQ) {
            sfRenderWindow_close(window);
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace) && *access == 0) {
            *access = 1;
            playjump(soundjump);
        }
    }
}