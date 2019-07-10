/*
** EPITECH PROJECT, 2019
** speedlayer
** File description:
** 2018
*/

#include "../../include/libmy.h"

int speed_layer1234(float *x, float *x2, float *x3, float *x4)
{
    *x = *x - 0.25;
    if (*x < -1920)
        *x = 0;
    *x2 = *x2 - 0.5;
    if (*x2 < -1920)
        *x2 = 0;
    *x3 = *x3 - 1.0;
    if (*x3 < -1920)
        *x3 = 0;
    *x4 = *x4 - 2.0;
    if (*x4 < -1920)
        *x4 = 0;
}

int speed_layer5678(float *x5, float *x6, float *x7, float *x8)
{
    *x5 = *x5 - 3.0;
    if (*x5 < -1920)
        *x5 = 0;
    *x6 = *x6 - 3.5;
    if (*x6 < -1920)
        *x6 = 0;
    *x7 = *x7 - 4.0;
    if (*x7 < -1920)
        *x7 = 0;
    *x8 = *x8 - 7.0;
    if (*x8 < -1920)
        *x8 = 0;
}

int speed_layer9(float *x9)
{
    *x9 = *x9 - 7.0;
    if (*x9 < -2200)
        *x9 = 0;
}