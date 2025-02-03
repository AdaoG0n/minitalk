# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adamarqu <adamarqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 14:08:27 by adamarqu          #+#    #+#              #
#    Updated: 2025/02/03 15:52:01 by adamarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

RESET 		= \033[0m
GREEN 		= \033[1;32m
BLUE 		= \033[1;34m
WHITE 		= \033[1;37m
BOLD 		= \033[1m

CC		= cc
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

CLIENT			= client
SERVER			= server
CLT_OBJS 		= client.o
SRV_OBJS 		= server.o

UTILS			= utils
UTL_OBJS		= utils.o

all: $(CLIENT) $(SERVER)


$(CLIENT): $(CLT_OBJS) $(UTL_OBJS)
	$(CC) $(CFLAGS) $(CLT_OBJS) $(UTL_OBJS) -o $(CLIENT)
	@echo "\${GREEN}                                                            \n\
    	           ▄   ▄ ▄ ▄   ▄ ▄ ▄▄▄▄▄ ▄▄▄▄ ▄   ▄  ▄ \n\
    	           █▀▄▀█ █ █▀▄ █ █   █   █  █ █   █▄▀  \n\
    	           █   █ █ █  ▀█ █   █   █▀▀█ █▄▄ █ ▀▄ \n\
${BLUE}	▄   ▄ ▄▄▄▄ ▄▄▄▄   ▄▄▄▄ ▄▄▄▄ ▄   ▄ ▄▄▄▄ ▄ ▄    ▄▄▄▄ ▄▄▄  \n\
		█   █ █  █ █▄▄▄   █    █  █ █▀▄▀█ █  █ █ █    █▄▄▄ █  █ \n\
		▀▄▀▄▀ █▀▀█ ▄▄▄█   █▄▄▄ █▄▄█ █   █ █▀▀▀ █ █▄▄▄ █▄▄▄ █▄▄▀ \${BLUE} "
	@echo "${GREEN}   						∘ ${WHITE}by ${BOLD}adamarqu${GREEN} ∘$(RESET)\n"
	@echo


$(SERVER): $(SRV_OBJS) $(UTL_OBJS)
	$(CC) $(CFLAGS) $(SRV_OBJS) $(UTL_OBJS) -o $(SERVER)
	

clean:
	$(RM) $(CLT_OBJS) $(SRV_OBJS) $(UTL_OBJS)
ifndef FCLEAN
	@echo  "\${GREEN}                                                            \n\
             	    ▄▄▄▄ ▄    ▄▄▄▄ ▄▄▄▄ ▄  ▄ ▄▄▄▄ ▄▄▄  \n\
             	    █    █    █▄▄  █▄▄█ █▀▄█ █▄▄  █  █ \n\
             	    █▄▄▄ █▄▄▄ █▄▄▄ █  █ █  █ █▄▄▄ █▄▄▀ ${BLUE} "
	@echo "${GREEN}                     ∘ ${WHITE}Project cleaned successfully ${GREEN}∘$(DEF_COLOR)\n"
	@echo
endif

fclean: 
	@$(MAKE) -s clean FCLEAN=1
	$(RM) $(CLIENT) $(SERVER)
	@echo  "\${GREEN}                                                            \n\
                ▄▄▄▄    ▄▄▄▄ ▄    ▄▄▄▄ ▄▄▄▄ ▄  ▄ ▄▄▄▄ ▄▄▄  \n\
                █▄▄     █    █    █▄▄  █▄▄█ █▀▄█ █▄▄  █  █ \n\
                █   ▄   █▄▄▄ █▄▄▄ █▄▄▄ █  █ █  █ █▄▄▄ █▄▄▀ ${BLUE} "
	@echo "${GREEN}                  ∘ ${WHITE}Project full cleaned successfully ${GREEN}∘$(DEF_COLOR)\n"
	@echo

re:	fclean all

.PHONY: clean fclean all re norm