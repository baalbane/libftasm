# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaborea <egaborea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 16:16:41 by egaborea          #+#    #+#              #
#    Updated: 2018/04/29 16:41:37 by egaborea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC_PATH = ./srcs/
SRC_NAME = 	ft_isascii.s 	ft_isdigit.s \
			ft_islower.s 	ft_isupper.s \
			ft_isalpha.s 	ft_bzero.s

TEST_PATH = ./tests/
TEST_NAME = $(SRC_NAME:.s=_test.c)

TEST_BIN_PATH = ./bin_test/
TEST_BIN_NAME = $(SRC_NAME:.s=_test)

OBJ_PATH = ./objs/
OBJ_NAME = $(SRC_NAME:.s=.o)

NAME = libfts.a

CC = ~/.brew/bin/nasm
CFLAGS = -fmacho64

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
TEST_BINS = $(addprefix $(TEST_BIN_PATH), $(TEST_BIN_NAME))


all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.s
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	rm -fv $(NAME)

re: fclean all

test: $(NAME) $(TEST_BINS)

$(TEST_BIN_PATH)%_test: $(TEST_PATH)%_test.c $(NAME)
	@mkdir $(TEST_BIN_PATH) 2> /dev/null || echo "" > /dev/null
	@gcc -o $@ $< -L./ $(NAME)
	@./$@;# if [ $$? == 0 ]; then echo $@ " => OK"; else echo $@ " => KO"; fi
