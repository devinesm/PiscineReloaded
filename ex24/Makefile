# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ipinto-m <ipinto-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 17:39:47 by ipinto-m          #+#    #+#              #
#    Updated: 2026/04/13 17:50:11 by ipinto-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes

SRCS	= $(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_putstr.c  \
	$(SRC_DIR)/ft_strcmp.c  \
	$(SRC_DIR)/ft_strlen.c  \
	$(SRC_DIR)/ft_swap.c

OBS	= $(SRCS:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -I$(INC_DIR)

RM	= rm -f
LIBC	= ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
