# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 10:30:03 by adamarqu          #+#    #+#              #
#    Updated: 2025/03/19 11:58:47 by adamarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

RESET           = \033[0m
GREEN           = \033[1;32m
RED             = \033[1;31m
BLUE            = \033[1;34m
WHITE           = \033[1;37m
BOLD            = \033[1m

CC			= cc
RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror

CLIENT		= client
SERVER		= server
CLT_OBJS	= client.o
SRV_OBJS	= server.o

LIBFT		= ./libft/libft.a

all: $(CLIENT) $(SERVER)

$(CLIENT): $(CLT_OBJS)
		$(CC) $(CFLAGS) $(CLT_OBJS) -L./libft -lft -o $(CLIENT)
		@echo "$(GREEN)╔════════════════════════════════════════╗$(RESET)"
		@echo "$(GREEN)║$(BLUE)         Minitalk was compiled!         $(GREEN)║$(RESET)"
		@echo "$(GREEN)║$(WHITE)              by $(BOLD)adamarqu$(WHITE)               $(GREEN)║$(RESET)"
		@echo "$(GREEN)╚════════════════════════════════════════╝$(RESET)"
		@echo

$(SERVER): $(SRV_OBJS)
		 $(CC) $(CFLAGS) $(SRV_OBJS) -L./libft -lft -o $(SERVER)

$(LIBFT):
		$(MAKE) -C ./libft

clean:
		$(RM) $(CLT_OBJS) $(SRV_OBJS)
		$(MAKE) -C ./libft clean
		
ifndef FCLEAN
		@echo "$(BLUE)╔════════════════════════════════════════╗$(RESET)"
		@echo "$(BLUE)║$(GREEN)         Objects were $(BOLD)cleaned!          $(BLUE)║$(RESET)"
		@echo "$(BLUE)╚════════════════════════════════════════╝$(RESET)"
		@echo
endif

fclean: 
		@$(MAKE) -s clean FCLEAN=1
		$(RM) $(CLIENT) $(SERVER)
		@echo "$(BLUE)╔════════════════════════════════════════╗$(RESET)"
		@echo "$(BLUE)║$(GREEN)        Everything was $(BOLD)cleaned!         $(BLUE)║$(RESET)"
		@echo "$(BLUE)╚════════════════════════════════════════╝$(RESET)"
		@echo

re:     fclean all

.PHONY: clean fclean all re norm

