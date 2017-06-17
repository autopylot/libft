# NAME = libft.a
# CC = gcc
# CFLAGS =  -Wall -Wextra -Werror
#
# #File Directories
# SRC_DIR := ./src
# INC_DIR	:= ./include
#
# SRCS = $(wildcard $(SRC_DIR)/*.c)
# INCS = $(wildcard $(INC_DIR)/*.h)
# OBJS = $(patsubst %.c,%.o,$(SRCS))
#
# all : $(NAME)
#
# $(NAME) : $(OBJS)
# 	ar rcs $(NAME) $(OBJS)
#
# $(OBJS) : $(SRCS)
# 	$(CC) $(CFLAGS) $(SRCS)
#
# clean :
# 	rm -f $(OBJ)
# fclean :
#
# re :
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = $(patsubst %.c,%.o,$(wildcard ./*.c))

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
