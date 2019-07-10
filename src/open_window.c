/*
** EPITECH PROJECT, 2018
** open_window
** File description:
** 2018
*/

#include "../include/libmy.h"

void open_window(sfRenderWindow *window, sfEvent event)
{
    int i = 0;
    int offset = 323;
    int max_value = 3225;
    int scr = 0;
    float pos_y = 595;
    float access = 0;
    float x = 0;
    float x2 = 0;
    float x3 = 0;
    float x4 = 0;
    float x5 = 0;
    float x6 = 0;
    float x7 = 0;
    float x8 = 0;
    float x9 = 0;
    sfIntRect rect = {0, 0, 323, 393};
    sfClock *clock = sfClock_create();
    t_sprite *layer1 = create_sprite("media/png/calque1.png");
    t_sprite *layer2 = create_sprite("media/png/calque2.png");
    t_sprite *layer3 = create_sprite("media/png/calque3.png");
    t_sprite *layer4 = create_sprite("media/png/calque4.png");
    t_sprite *layer5 = create_sprite("media/png/calque5.png");
    t_sprite *layer6 = create_sprite("media/png/calque6.png");
    t_sprite *layer7 = create_sprite("media/png/calque7.png");
    t_sprite *layer8 = create_sprite("media/png/calque8.png");
    t_sprite *layer9 = create_sprite("media/png/calque9.png");
    t_sprite *charac = create_sprite("media/png/spritesheetjump.png");
    t_sprite *tombstone = create_sprite("media/png/SpriteTombstone.png");

    while (sfRenderWindow_isOpen(window)) {
        analyse_events(window, event, charac, &access);
        sfRenderWindow_drawSprite(window, layer1->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer2->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer3->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer4->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer5->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer6->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer7->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer8->sprite, NULL);
        sfRenderWindow_drawSprite(window, layer9->sprite, NULL);
        disp_charac(window, charac, rect);
        sfRenderWindow_drawSprite(window, tombstone->sprite, NULL);
        anim_jump(charac, &pos_y, &access, &rect);
        print_score(window, &scr);
        obstacle(window, tombstone, charac);
        speed_layer1234(&x, &x2, &x3, &x4);
        speed_layer5678(&x5, &x6, &x7, &x8);
        speed_layer9(&x9);
        anim_second(window, x, layer2);
        anim_third(window, x2, layer3);
        anim_fourth(window, x3, layer4);
        anim_fifth(window, x4, layer5);
        anim_sixth(window, x5, layer6);
        anim_seventh(window, x6, layer7);
        anim_eighth(window, x7, layer8);
        anim_ninth(window, x8, layer9);
        anim_tombstone(window, &x9, tombstone);
        if (sfClock_getElapsedTime(clock).microseconds / 1000000.0 > 0.05
        && access == 0) {
            move_rect(&rect, offset, max_value);
            sfClock_restart(clock);
        }
        sfRenderWindow_display(window);
    }
}
