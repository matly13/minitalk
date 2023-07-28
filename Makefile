SERVER = server

CLIENT = client

SERVER_B = server_bonus

CLIENT_B = client_bonus

LIBFT = ./libft/libft.a

HEADER = includes/minitalk.h

HEADER_B = includes/minitalk_bonus.h

CFLAGS = -Wall -Wextra -Werror

all: $(LIBFT) $(CLIENT) $(SERVER) $(HEADER)

$(SERVER): server.c $(HEADER)
	@gcc server.c $(LIBFT) -o $@
	@echo $@ ready

$(CLIENT): client.c $(HEADER)
	@gcc $(CFLAGS) client.c $(LIBFT) -o $@
	@echo $@ ready

$(SERVER_B): server_bonus.c $(HEADER_B)
	@gcc server_bonus.c $(LIBFT) -o $@
	@echo $@ ready
$(CLIENT_B): client_bonus.c $(HEADER_B)
	@gcc client_bonus.c $(LIBFT) -o $@
	@echo $@ ready

$(LIBFT):
	@make -C./libft
bonus: $(LIBFT) $(SERVER_B) $(CLIENT_B) $(HEADER_B)

clean:
	@make clean -C ./libft

fclean: clean
	rm -rf $(SERVER) $(CLIENT) $(SERVER_B) $(CLIENT_B)
	make fclean -C ./libft

re: fclean all

.PHONY: all re clean fclean bonus


