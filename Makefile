NAME = libftprintf.a
# compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
# dirs
LIBFT_DIR = libft
SRC_DIR = src
OBJ_DIR = obj
APPS_DIR = apps
BIN_DIR = bin
#files
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_OBJS = $(wildcard $(LIBFT_DIR)/src/*.o)

# Mandatório
all: $(LIBFT) $(NAME) 

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/*.o
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all

#My own
TEST_DIR = tests
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_BINS = $(TEST_SRCS:$(TEST_DIR)/%.c=$(BIN_DIR)/%)
NAME_COMPARE = $(BIN_DIR)/test_printf_vs_ft_printf_tester

# Definindo algumas cores
RED    := \033[0;31m
GREEN  := \033[0;32m
YELLOW := \033[0;33m
NC     := \033[0m  # Sem cor (reset)
B_RED    := \033[1;31m
B_GREEN  := \033[1;32m
B_YELLOW := \033[1;33m

tests: $(TEST_BINS)
	@echo "Todos os testes foram compilados."

$(BIN_DIR)/%: $(TEST_DIR)/%.c $(NAME)
	$(CC) $(CFLAGS) -g $< $(NAME) $(LIBFT) -o $@_tester

compare: tests
	@echo "$(B_YELLOW)Iniciando o comparativo$(NC)"
	./$(NAME_COMPARE)

francinette: tests
	@echo "$(B_YELLOW)Iniciando o teste de erros da Francinette$(NC)"
	./bin/tests_francinette_tester

printf: tests
	@echo "$(B_YELLOW)Iniciando o teste de erros: ft_printf_test$(NC)"
	./bin/ft_printf_test_tester

$(NAME_COMPARE): $(SRCS_COMPARE)
	@echo "$(B_YELLOW)Compilando o arquivo $(SRCS_COMPARE)$(NC)"
	$(CC) $(CFLAGS) -g $(SRCS_COMPARE) -o $(NAME_COMPARE)

cleantestes:
	rm -f $(BIN_DIR)/*tester

.PHONY: all clean fclean re

