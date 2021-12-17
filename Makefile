##
## EPITECH PROJECT, 2018
## MAKEFILE
## File description:
## 
##

NAME	=	bsq

LIB_DIR	=	lib/my

SRC	=	main.c			\
		SRC/malloc.c		\
		SRC/print.c		\
		SRC/change_map.c	\
		SRC/algo.c		\
		SRC/other.c		\

CFLAGS	=	-W -Wall -Wextra -g3

LDFLAGS	=	-L. -lmy

CC	=	gcc -Iinclude

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C$(LIB_DIR)
	$(CC) $(OBJ) -o $(NAME)  $(CFLAGS) $(LDFLAGS)
clean:
	make clean -C$(LIB_DIR)
	rm -f $(OBJ)
	rm -f libmy.a

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re
