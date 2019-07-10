/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** 2018
*/

#include "../../include/libmy.h"

char *my_revstr(char *str)
{
    int i = 0;
    int c = 0;
    char z = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    i = i - 1;

    while (i > c) {
        z = str[c];
        str[c] = str[i];
        str[i] = z,
        c = c + 1;
        i = i - 1;
    }
    return (str);
}
