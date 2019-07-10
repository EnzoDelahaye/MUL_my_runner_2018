##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## 2018
##

NAME	= my_runner

CC	= gcc

RM	= rm -f

SRCS	= src/main.c \
		src/analyse_events.c \
		src/anim/anim_eighth.c \
		src/anim/anim_fifth.c \
		src/anim/anim_fourth.c \
		src/anim/anim_jump.c \
		src/anim/anim_ninth.c \
		src/anim/anim_second.c \
		src/anim/anim_seventh.c \
		src/anim/anim_sixth.c \
		src/anim/anim_third.c \
		src/anim/anim_tombstone.c \
		src/anim/move_rect.c \
		src/anim/obstacle.c \
		src/anim/speed_layer.c \
		src/create_sprite.c \
		src/descriptor.c \
		src/disp_char.c \
		src/open_window.c \
		src/my/my_int_to_str.c \
		src/my/my_putchar.c \
		src/my/my_putstr.c \
		src/my/my_revstr.c \
		src/sound/soundband.c \
		src/sound/soundjump.c \
		src/text/score.c \
		src/text/text.c \

OBJS	= $(SRCS:.c=.o)

FLAGS = -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
