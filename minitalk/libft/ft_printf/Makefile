# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 13:45:20 by adamarqu          #+#    #+#              #
#    Updated: 2025/01/07 13:18:26 by adamarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror

SRCS 		= ft_printf.c ft_print_char.c ft_print_string.c ft_print_number.c \
       		ft_print_hex.c ft_print_pointer.c ft_print_unsigned.c

OBJS 		= $(SRCS:.c=.o)

RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
