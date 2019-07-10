/*
** EPITECH PROJECT, 2018
** game sound band
** File description:
** 2018
*/

#include "../../include/libmy.h"

void playmusic(sfMusic *soundband)
{
    soundband = sfMusic_createFromFile("media/sound/soundband.ogg");
    sfMusic_play(soundband);
    sfMusic_setVolume(soundband, 100);
    sfMusic_setLoop(soundband, sfTrue);
}