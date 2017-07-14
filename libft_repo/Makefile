# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 14:55:09 by wlin              #+#    #+#              #
#    Updated: 2017/07/14 13:42:57 by wlin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src/
BUILD_DIR = build/
INC_DIR = -I include/
#VPATH =

# SRC_CHAR = \
# 	ft_isalnum \
# 	ft_isalpha \
#
# SRC_IO =
#
# SRC_LST =
#
# SRC_MEM =
#
# SRC_STR =
SRC_CHAR = char/
SRC_IO = io/


SRC = \
	$(addprefix $(SRC_DIR), /char/, $(wildcard *.c)) \
	$(addprefix $(SRC_DIR), /io/, $(wildcard *.c)) \
	$(addprefix $(SRC_DIR), /lst/, $(wildcard *.c)) \
	$(addprefix $(SRC_DIR), /mem/, $(wildcard *.c)) \
	$(addprefix $(SRC_DIR), /str/, $(wildcard *.c)) \

OBJ = \
$(addprefix $(BUILD_DIR), $(patsubst %.c,%.o,$(SRC_CHAR) $(wildcard *.c)))\
$(addprefix $(BUILD_DIR), $(patsubst %.c,%.o,$(SRC_IO) $(wildcard *.c)))

all: $(NAME)

$(NAME): $(BUILD_DIR) $(OBJ)
	@ar rc $@ $(OBJ)
	@ranlib $(NAME)
	@echo (づ ￣ ³￣)づ    ⓈⓂⓄⓄⓉⒽ

$(BUILD_DIR):
	@mkdir $(BUILD_DIR)

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@if [-e $(BUILD_DIR)];\
	then \
		rm -rf $(BUILD_DIR);

fclean: clean
	@if [-e $(NAME)];\
	then \
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
