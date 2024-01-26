# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achbira <achbira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 04:44:46 by achbira           #+#    #+#              #
#    Updated: 2023/12/02 12:55:54 by achbira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
FUNCT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_calloc.c ft_strdup.c ft_strmapi.c ft_striteri.c	\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		
BONUSFCTS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c  ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c  ft_lstmap.c  ft_lstnew.c  ft_lstsize.c \

OBJCS = $(FUNCT:.c=.o)

BONUSOBJCS = $(BONUSFCTS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	ar -rc $(NAME) $(OBJCS)
	
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(BONUSOBJCS) $(OBJCS)

.PHONY: clean bonus all 


fclean: clean
	rm -rf $(NAME)

re : fclean all

bonus: $(BONUSOBJCS)
	ar -rc $(NAME) $(BONUSOBJCS)
