NAME = fractol

INCLUDES = libft/includes/

SRC = burning.c ft_begin.c ft_error.c img_pixel_put.c julia.c keyhook.c \
main.c mandel.c multibrot3.c multibrot5.c otherfrac.c rmandel.c \
write_list.c toi.c loi.c purple.c yellow.c zoom.c cyan.c carpet.c

	  
WFLAGS = -Wall -Werror -Wextra -O3 -march=native

LFLAGS = -L libft/ -lft -lm -lmlx -framework OpenGL -framework AppKit

CC = gcc

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) -c $(WFLAGS) -I $(INCLUDES) $< -o $@

$(NAME) : $(OBJ)
	make -C libft
	$(CC) -o $(NAME) $(OBJ) $(WFLAGS) $(LFLAGS)

clean :
	rm -rf $(OBJ)
	make -C libft clean

fclean : clean
	rm -f $(NAME)
	make -C libft fclean

re : fclean all

lre :
	make -C libft/ re

.PHONY: all clean fclean re