##
## EPITECH PROJECT, 2018
## MAKEFILE
## File description:
## 
##

CC      =       gcc

RM      =       rm -f

NAME    =     	libmy.a

SRC    =   	$(wildcard *.c)

OBJ    =	$(SRC:.c=.o)

CFLAGS =	-W -Wall -Wextra -I../../include

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv libmy.a ../../

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
