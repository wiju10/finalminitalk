# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wtan <wtan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 05:26:47 by wtan              #+#    #+#              #
#    Updated: 2022/09/17 05:26:48 by wtan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
libft = libft
printf = ft_printf
libft_dir = ./libft
printf_dir = ./ft_printf
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

$(SERVER):
	make all -C $(libft)/
	make all -C $(printf)/
	$(CC) $(CFLAGS) $(printf_dir)/libftprintf.a $(libft_dir)/libft.a server.c -o server

$(CLIENT):
	make all -C $(libft)/
	make all -C $(printf)/
	$(CC) $(CFLAGS) $(printf_dir)/libftprintf.a $(libft_dir)/libft.a client.c -o client

%o: %.c
		$(CC) -c $(CFLAGS) $?


server: $(SERVER)

client: $(CLIENT)


clean:
		make -C ft_printf clean
		make -C libft clean
		$(RM) $(CLIENT) $(SERVER) $(SERVER_BONUS) $(CLIENT_BONUS)

fclean:
		make fclean -C $(libft)/
		make fclean -C $(printf)/
		$(RM) $(CLIENT) $(SERVER) $(SERVER_BONUS) $(CLIENT_BONUS)
		
re: clean all

.PHONY: all ft_printf clean fclean re