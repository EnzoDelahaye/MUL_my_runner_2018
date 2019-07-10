/*
** EPITECH PROJECT, 2018
** library
** File description:
** 2018
*/

#ifndef		LIBMY_H__
#define		LIBMY_H__


#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct sprite
{
    sfTexture *texture;
    sfSprite *sprite;
}t_sprite;

typedef struct texture
{
    sfText* text;
    sfFont* font;
}t_text;

t_sprite **all_layer();
t_sprite *create_sprite(char const *);
int my_putstr(char const *str);
void my_putchar(char c);
char *my_int_to_str(int num);
char *my_revstr(char *str);
int descriptor(void);
int disp1(void);
void open_window(sfRenderWindow *window, sfEvent event);
int anim_second(sfRenderWindow *window, float x, t_sprite *layer2);
int anim_third(sfRenderWindow *window, float x2, t_sprite *layer3);
int anim_fourth(sfRenderWindow *window, float x3, t_sprite *layer4);
int anim_fifth(sfRenderWindow *window, float x4, t_sprite *layer5);
int anim_sixth(sfRenderWindow *window, float x5, t_sprite *layer6);
int anim_seventh(sfRenderWindow *window, float x6, t_sprite *layer7);
int anim_eighth(sfRenderWindow *window, float x7, t_sprite *layer8);
int anim_ninth(sfRenderWindow *window, float x8, t_sprite *layer9);
int anim_tombstone(sfRenderWindow *window, float *x8, t_sprite *tombstone);
void playmusic(sfMusic *soundband);
void playjump(sfMusic *soundjump);
void disp_charac(sfRenderWindow *window, t_sprite *charac, sfIntRect rect);
void move_rect(sfIntRect *rect, int offset, int max_value);
void analyse_events(sfRenderWindow *window, sfEvent event, t_sprite *charac,
float *access);
int anim_jump(t_sprite *charac, float *pos_y, float *access, sfIntRect *rect);
int draw_layer(sfRenderWindow *window, t_sprite **all_layer);
int print_score(sfRenderWindow *window, int *scr);
t_text *create_text(char const *filepath);
void set_the_text(t_text *set_text, int size, char *str, int rotate);
int  print_text(sfRenderWindow *window, char *content, int x, int y);
int obstacle(sfRenderWindow *window, t_sprite *tombstone, t_sprite *charac);
int speed_layer1234(float *x, float *x2, float *x3, float *x4);
int speed_layer5678(float *x5, float *x6, float *x7, float *x8);
int speed_layer9(float *x9);

#endif		/* !LIBMY_H__*/