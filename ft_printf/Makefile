# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbasile <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 12:35:36 by mbasile           #+#    #+#              #
#    Updated: 2023/02/24 10:36:37 by mbasile          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= 	ft_printf.c \
	   		ft_numbers.c \
			ft_string.c \

OBJS	= ${SRCS:.c=.o}

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

$(NAME):	${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all, clean, fclean, re
