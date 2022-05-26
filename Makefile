# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtubtimt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 11:46:14 by jtubtimt          #+#    #+#              #
#    Updated: 2022/05/19 12:30:42 by jtubtimt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isdigit.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcpy.c \
		ft_strncmp.c \
		ft_memmove.c \
		ft_strdup.c \


		
OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CC_FLAGS} -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

norm:
	norminette *.c

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: norm all clean fclean re
