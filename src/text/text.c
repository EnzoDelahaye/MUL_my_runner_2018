/*
** EPITECH PROJECT, 2019
** text
** File description:
** 2018
*/

#include "../../include/libmy.h"

t_text *create_text(char const *filepath)
{
    char const *str = malloc(sizeof(t_text));
    t_text *new_text = malloc(sizeof(t_text));

    new_text->font = sfFont_createFromFile(filepath);
    new_text->text = sfText_create();
    sfText_setString(new_text->text, str);
    sfText_setFont(new_text->text, new_text->font);
    return (new_text);
}

void set_the_text(t_text *set_text, int size, char *str, int rotate)
{
    sfText_setString(set_text->text, str);
    sfText_setFont(set_text->text, set_text->font);
    sfText_setCharacterSize(set_text->text, size);
    sfText_rotate(set_text->text, rotate);
}

int print_text(sfRenderWindow *window, char *content, int x, int y)
{
    sfVector2f pos_score = {x, y};
    t_text *score = create_text("media/DoubleFeature20.ttf");

    set_the_text(score, 60, content, -5);
    sfText_setPosition(score->text, pos_score);
    sfRenderWindow_drawText(window, score->text, NULL);
}