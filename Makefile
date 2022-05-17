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
