NAME = server client
SRC = server
CLT = client
SRC = server.c client.c
CFLASGS = -Wall -Wextra -Werror

all : server client

server : server.c
	cc $(CFLSGS) $< -o $@ 

client : client.c 
	cc $(FLAGS) $< -o $@ 

clean :
	rm $(NAME)

fclean : clean
	rm $(NAME)

re : clean all