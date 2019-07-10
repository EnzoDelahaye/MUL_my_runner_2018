/*
** EPITECH PROJECT, 2019
** int to str
** File description:
** 2018
*/

#include "../../include/libmy.h"

char *my_int_to_str(int num)
{
    int i = 0;
    char *str = malloc(sizeof(char) * 10);

    if (num == 0)
        str[i] = '0';
    while (num > 0) {
        str[i] = (num % 10) + 48;
        num = num / 10;
        i++;
    }
    str[i] = '\0';
    return (my_revstr(str));
}
