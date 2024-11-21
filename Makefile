NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
LIBFT_DIR = libft
SRC_DIR = src
OBJ_DIR = obj
APPS_DIR = apps
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIBFT = $(LIBFT_DIR)/libft.a

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


test:
	$(CC) $(CFLAGS) $(APPS_DIR)/main.c -o test

.PHONY: all clean fclean re

