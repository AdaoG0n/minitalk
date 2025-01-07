# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 10:52:20 by adamarqu          #+#    #+#              #
#    Updated: 2025/01/07 13:27:59 by adamarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

GREEN		= \033[0;32m
RED			= \033[0;31m
BLUE 		= \033[0;94m
BOLD 		= \033[1m

CC = cc
CCFLAGS = cc -Wall -Werror -Wextra
MAKEFLAGS += -s

SERVER = server
CLIENT = client
SRCS_SERVER = server.c
SRCS_CLIENT = client.c
SRCS_SERVER_BONUS = server_bonus.c
SRCS_CLIENT_BONUS = client_bonus.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)


all: $(SERVER) $(CLIENT)

$(SERVER) $(CLIENT): $(OBJS_SERVER) $(OBJS_CLIENT) $(LIBFT)
	@${CCFLAGS} ${OBJS_SERVER} libft/libft.a -o ${SERVER}
	@${CCFLAGS} ${OBJS_CLIENT} libft/libft.a -o ${CLIENT}
	@echo "\${BLUE}                                                            \n\
    	           ▄   ▄ ▄ ▄   ▄ ▄ ▄▄▄▄▄ ▄▄▄▄ ▄   ▄  ▄ \n\
    	           █▀▄▀█ █ █▀▄ █ █   █   █  █ █   █▄▀  \n\
    	           █   █ █ █  ▀█ █   █   █▀▀█ █▄▄ █ ▀▄ \n\
		▄   ▄ ▄▄▄▄ ▄▄▄▄   ▄▄▄▄ ▄▄▄▄ ▄   ▄ ▄▄▄▄ ▄ ▄    ▄▄▄▄ ▄▄▄  \n\
		█   █ █  █ █▄▄▄   █    █  █ █▀▄▀█ █  █ █ █    █▄▄▄ █  █ \n\
		▀▄▀▄▀ █▀▀█ ▄▄▄█   █▄▄▄ █▄▄█ █   █ █▀▀▀ █ █▄▄▄ █▄▄▄ █▄▄▀ \${BLUE} "
	@echo "${GREEN}   						∘ ${WHITE}by ${BOLD}adamarqu${GREEN} ∘$(DEF_COLOR)\n"
	@echo

$(LIBFT):
	@${MAKE} -C ./libft

bonus: ${OBJS_SERVER_BONUS} ${OBJS_CLIENT_BONUS} ${LIBFT}
	@${CCFLAGS} ${OBJS_SERVER_BONUS} libft/libft.a -o ${SERVER}
	@${CCFLAGS} ${OBJS_CLIENT_BONUS} libft/libft.a -o ${CLIENT}
	@echo "\${BLUE}                                                            \n\
    	▄   ▄ ▄ ▄   ▄ ▄ ▄▄▄▄▄ ▄▄▄▄ ▄   ▄  ▄   ▄▄▄  ▄▄▄▄ ▄   ▄ ▄  ▄ ▄▄▄▄\n\
    	█▀▄▀█ █ █▀▄ █ █   █   █  █ █   █▄▀    █▄▄▀ █  █ █▀▄ █ █  █ █▄▄▄\n\
    	█   █ █ █  ▀█ █   █   █▀▀█ █▄▄ █ ▀▄   █▄▄▀ █▄▄█ █  ▀█ █▄▄█ ▄▄▄█\n\
		     ▄   ▄ ▄▄▄▄ ▄▄▄▄   ▄▄▄▄ ▄▄▄▄ ▄   ▄ ▄▄▄▄ ▄ ▄    ▄▄▄▄ ▄▄▄  \n\
		     █   █ █  █ █▄▄▄   █    █  █ █▀▄▀█ █  █ █ █    █▄▄▄ █  █ \n\
		     ▀▄▀▄▀ █▀▀█ ▄▄▄█   █▄▄▄ █▄▄█ █   █ █▀▀▀ █ █▄▄▄ █▄▄▄ █▄▄▀ \${BLUE} "
	@echo "${GREEN}   						∘ ${WHITE}by ${BOLD}adamarqu${GREEN} ∘$(DEF_COLOR)\n"
	@echo

clean:	
	@$(MAKE) clean -C ./libft
	@rm -rf ${OBJS_SERVER} ${OBJS_CLIENT} ${OBJS_SERVER_BONUS} ${OBJS_CLIENT_BONUS}
	@echo  "\${GREEN}                                                            \n\
   	▄▄▄▄ ▄    ▄▄▄▄ ▄▄▄▄ ▄  ▄ ▄▄▄▄ ▄▄▄  \n\
   	█    █    █▄▄  █▄▄█ █▀▄█ █▄▄  █  █ \n\
   	█▄▄▄ █▄▄▄ █▄▄▄ █  █ █  █ █▄▄▄ █▄▄▀ ${BLUE} "
	@echo "${GREEN}        ∘ ${WHITE}Project cleaned successfully ${GREEN}∘$(DEF_COLOR)\n"
	@echo

fclean:	clean
	@$(MAKE) fclean -C ./libft
	@rm -rf $(SERVER) $(CLIENT)

re:	fclean all
