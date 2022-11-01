# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 18:09:41 by zouaraqa          #+#    #+#              #
#    Updated: 2022/10/18 15:09:51 by zouaraqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar rc
RM = rm -rf
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_putchar.c ft_putnbr_unsigned.c ft_printf.c ft_putnbr.c ft_putp.c \
		ft_printf.h	ft_putnbr_base.c ft_putstr.c

OBJ = $(SRC:.c=.o)

%.o : %.c
	${CC} $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

clean :
	$(RM) $(OBJ)

fclean :
	$(RM) $(OBJ) $(NAME)

re : fclean all