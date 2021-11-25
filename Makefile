# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arudy <arudy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 11:38:15 by arudy             #+#    #+#              #
#    Updated: 2021/11/25 14:16:08 by arudy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_atoi.c ft_bzero.c \
		ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c \
		ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strncmp.c \
		ft_strrchr.c ft_strtrim.c \
		ft_substr.c ft_tolower.c \
		ft_toupper.c ft_strnstr.c \
		ft_strmapi.c 


OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
