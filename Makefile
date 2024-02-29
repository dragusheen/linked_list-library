##
## EPITECH PROJECT, 2022
## dragusheen linked_list-library
## File description:
## makefile of the library
##

SRC	=	src/dl_apply_data.c	\
		src/dl_clear.c		\
		src/dl_empty.c		\
		src/dl_erase.c		\
		src/dl_extract.c	\
		src/dl_find.c		\
		src/dl_insert.c		\
		src/dl_length.c		\
		src/dl_pop_back.c	\
		src/dl_pop_front.c	\
		src/dl_push_back.c	\
		src/dl_push_front.c	\

OBJ	=	$(SRC:%.c=%.o)

NAME	=	libdl.a

FLAGS	=	-I./include	\
			-Wall		\
			-Wextra		\
			-g3

COMP	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

%.o: %.c
	$(COMP) $(FLAGS) -c -o $@ $<

.PHONY: all clean fclean re
