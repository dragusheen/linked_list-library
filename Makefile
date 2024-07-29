##
## EPITECH PROJECT, 2022
## dragusheen linked_list-library
## File description:
## makefile of the library
##

SRC	=	src/dl_apply.c		\
		src/dl_clear.c		\
		src/dl_empty.c		\
		src/dl_erase.c		\
		src/dl_extract.c	\
		src/dl_find.c		\
		src/dl_insert.c		\
		src/dl_length.c		\
		src/dl_pop.c		\
		src/dl_push.c		\

OBJ 	= 	$(patsubst src/%.c,object/%.o,$(SRC))

NAME	=	libdlist.a

FLAGS	=	-I./include	\
			-Wall		\
			-Wextra		\
			-g3

COMP	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)
	@rm -rf object

fclean: clean
	@rm -f $(NAME)

re: fclean all

object/%.o: src/%.c
	@mkdir -p $(@D)
	@$(COMP) $(FLAGS) $(LIBS) -g3 -c -o $@ $<

.PHONY: all clean fclean re

test: re
	@rm -rf test
	$(COMP) $(FLAGS) -o test main.c $(SRC) -L. -ldlist
