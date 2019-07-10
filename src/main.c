/*
** EPITECH PROJECT, 2018
** main
** File description:
** 2018
*/

#include "../include/libmy.h"

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfMusic *soundband;
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;
    window = sfRenderWindow_create(mode, "My Runner", sfDefaultStyle, NULL);

    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        descriptor();
        return (0);
    }
    playmusic(soundband);
    open_window(window, event);
    sfRenderWindow_destroy(window);

    return (0);
}