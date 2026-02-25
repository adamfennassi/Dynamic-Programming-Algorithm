##
## Makefile - Adam Fennassi
##

CC	= gcc -Wall -Werror -W -ansi -pedantic

NAME	= libmy.a

RM	= rm -f

INC	= my.h \

SRC	= my_strlen.c \
	  my_bzero.c \
	  my_putchar.c \
	  my_putstr.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	 $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp $(INC) ../../include

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
	$(RM) ../$(NAME)
	$(RM) ../../include/$(INC)

re:	fclean all

.PHONY:	all clean fclean re
