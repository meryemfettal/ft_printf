# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfettal <mfettal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 15:54:48 by mfettal           #+#    #+#              #
#    Updated: 2023/04/24 15:12:19 by mfettal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

SRC = 	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putunbr.c\
		ft_putstr.c\
		ft_pointer.c\
		ft_hexanbr.c

CC = cc
FLAGS = -Wall -Werror -Wextra
EXC = $(SRC:.c=.o)



all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

$(NAME) : $(EXC)
	ar -rc $(NAME) $(EXC)


clean:
		rm -rf $(EXC)

fclean: clean
		rm -rf $(NAME)

re: fclean all
