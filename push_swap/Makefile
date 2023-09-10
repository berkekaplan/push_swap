# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 16:37:11 by mkaplan           #+#    #+#              #
#    Updated: 2023/09/09 17:10:18 by mkaplan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = libft/ft_atoi.c libft/ft_isdigit.c libft/ft_lstadd_back.c libft/ft_lstlast.c \
	libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_putendl_fd.c libft/ft_split.c \
	libft/ft_strlen.c source/check_args.c source/free.c source/ft_push_small.c \
	source/ft_sort_five.c source/ft_sort_four.c source/ft_sort_three.c source/main.c \
	source/paste_index.c source/push.c source/radix.c source/reverse.c source/rotate.c \
	source/simple.c source/swap.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
