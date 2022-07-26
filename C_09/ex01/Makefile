# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tintran <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 18:54:54 by tintran           #+#    #+#              #
#    Updated: 2022/07/25 19:19:26 by tintran          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	srcs/*.c

OBJS	=	${SRCS:.c=.o}

.c.o	=	gcc -Wextra -Werror - Wall

${NAME} : ${OBJS}
				ar rc ${NAME} ${OBJS}

all: ${NAME}

clean: 
				rm -f ${OBJS}

fclean: clean
				rm -f ${NAME}

re: fclean all
