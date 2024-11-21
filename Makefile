NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
LIBFT_DIR = libft
SRC_DIR = src
OBJ_DIR = obj
APPS_DIR = apps
BIN_DIR = bin
TESTS_DIR = tests
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIBFT = $(LIBFT_DIR)/libft.a

NAME_COMPARE = $(BIN_DIR)/compare_printf
SRCS_COMPARE = $(TESTS_DIR)/test_printf_vs_ft_printf.c

# Definindo algumas cores
RED    := \033[0;31m
GREEN  := \033[0;32m
YELLOW := \033[0;33m
NC     := \033[0m  # Sem cor (reset)
B_RED    := \033[1;31m
B_GREEN  := \033[1;32m
B_YELLOW := \033[1;33m

all: $(LIBFT) $(NAME) 

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all

compare: $(NAME_COMPARE)
	@echo "$(B_YELLOW)Iniciando o comparativo$(NC)"
	./$(NAME_COMPARE)

$(NAME_COMPARE): $(SRCS_COMPARE)
	@echo "$(B_YELLOW)Compilando o arquivo $(SRCS_COMPARE)$(NC)"
	$(CC) $(CFLAGS) $(SRCS_COMPARE) -o $(NAME_COMPARE)

.PHONY: all clean fclean re

