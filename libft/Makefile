# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 12:08:07 by bbrunell          #+#    #+#              #
#    Updated: 2016/01/19 11:00:42 by bbrunell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c ft_itoa.c ft_putstr.c ft_strcmp.c ft_strnew.c

OBJECT = $(SRCS:.c=.o)

$(NAME): 
		gcc -Wall -Werror -Wextra -c $(SRCS) -I ./
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
