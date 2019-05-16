# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 11:56:33 by kchen2            #+#    #+#              #
#    Updated: 2019/05/16 15:34:45 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCS = ft_atoi	\
		ft_bzero	\
		ft_isalnum	\
		ft_isalpha	\
		ft_isascii	\
		ft_isdigit	\
		ft_ispace	\
		ft_isprint	\
		ft_itoa	\
		ft_lstadd	\
		ft_lstdel	\
		ft_lstdelone	\
		ft_lstiter	\
		ft_lstmap	\
		ft_lstnew	\
		ft_memalloc	\
		ft_memccpy	\
		ft_memchr	\
		ft_memcmp	\
		ft_memcpy	\
		ft_memdel	\
		ft_memmove	\
		ft_memset	\
		ft_numlen	\
		ft_putchar	\
		ft_putchar_fd	\
		ft_putendl	\
		ft_putendl_fd	\
		ft_putnbr	\
		ft_putnbr_fd	\
		ft_putstr	\
		ft_putstr_fd	\
		ft_strcat	\
		ft_strchr	\
		ft_strclr	\
		ft_strcmp	\
		ft_strcpy	\
		ft_strdel	\
		ft_strdup	\
		ft_strequ	\
		ft_striter	\
		ft_striteri	\
		ft_strjoin	\
		ft_strlcat	\
		ft_strlen	\
		ft_strmap	\
		ft_strmapi	\
		ft_strncat	\
		ft_strncmp	\
		ft_strncpy	\
		ft_strnequ	\
		ft_strnew	\
		ft_strnstr	\
		ft_strrchr	\
		ft_strsplit	\
		ft_strstr	\
		ft_strsub	\
		ft_strtrim	\
		ft_tolower	\
		ft_toupper	\
		ft_word_count	\
		ft_word_len

INCL = ./srcs/libft.h

SRC = $(addprefix srcs/, $(addsuffix .c, $(FUNCS)))

SRCO = $(addsuffix .o, $(FUNCS))

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC) -I$(INCL)
	@echo "$(words $(SRCO)) obj was made"
	@ar rc $(NAME) $(SRCO)
	@echo "libft.a was made"
	@ranlib $(NAME)

all: $(NAME)

clean:
	@/bin/rm -f $(SRCO)
	@echo "$(words $(SRCO)) obj deleted"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "libft.a deleted"

re: fclean all
