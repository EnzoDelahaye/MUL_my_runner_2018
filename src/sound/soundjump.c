/*
** EPITECH PROJECT, 2019
** soundjump
** File description:
** 2018
*/

#include "../../include/libmy.h"

void playjump(sfMusic *soundjump)
{
    soundjump = sfMusic_createFromFile("media/sound/jump_sound.ogg");
    sfMusic_play(soundjump);
    sfMusic_setVolume(soundjump, 100);
    sfMusic_setLoop(soundjump, sfFalse);
}