# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 00:21:48 by jose-an2          #+#    #+#              #
#    Updated: 2025/11/30 22:55:55 by jose-an2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------------------
# Variables
# -----------------------
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I./includes -I./libft

LIBFT_DIR = libft
LIBFT = ./libft/libft.a
RM = rm -rf

SRCS = utils.c sorting.c main.c orders.c
SRC = $(addprefix ./src/,$(SRCS))
OBJ = $(SRC:.c=.o)

# -----------------------
# Targets
# -----------------------
all: $(LIBFT) $(NAME)

# Compilar libft
$(LIBFT):
	@make -s -C $(LIBFT_DIR)

# Compilar el ejecutable
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L./$(LIBFT_DIR) -lft

# Regla de patrón para compilar .c a .o 
./src/%.o: ./src/%.c Makefile ./includes/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	$(RM) ./src/*.o
	@make -s -C $(LIBFT_DIR) clean

# Limpiar todo
fclean: clean
	$(RM) $(NAME)
	@make -s -C $(LIBFT_DIR) fclean

# Recompilar todo
re: fclean all

.PHONY: all clean fclean re

