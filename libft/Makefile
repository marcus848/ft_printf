NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DIR_INCLUDE = ../include
DIR_SRC = src/
SRCS =  $(DIR_SRC)ft_isalnum.c $(DIR_SRC)ft_isalpha.c $(DIR_SRC)ft_isdigit.c $(DIR_SRC)ft_strlen.c $(DIR_SRC)ft_isascii.c \
    	$(DIR_SRC)ft_isprint.c $(DIR_SRC)ft_memset.c $(DIR_SRC)ft_bzero.c $(DIR_SRC)ft_memcpy.c $(DIR_SRC)ft_memmove.c \
    	$(DIR_SRC)ft_toupper.c $(DIR_SRC)ft_tolower.c $(DIR_SRC)ft_strchr.c $(DIR_SRC)ft_strrchr.c $(DIR_SRC)ft_memchr.c \
	$(DIR_SRC)ft_atoi.c $(DIR_SRC)ft_strdup.c $(DIR_SRC)ft_strlcpy.c $(DIR_SRC)ft_strlcat.c $(DIR_SRC)ft_calloc.c \
	$(DIR_SRC)ft_memcmp.c $(DIR_SRC)ft_strnstr.c $(DIR_SRC)ft_substr.c $(DIR_SRC)ft_strncmp.c $(DIR_SRC)ft_strjoin.c \
	$(DIR_SRC)ft_strtrim.c $(DIR_SRC)ft_split.c $(DIR_SRC)ft_itoa.c $(DIR_SRC)ft_strmapi.c $(DIR_SRC)ft_striteri.c \
	$(DIR_SRC)ft_putchar_fd.c $(DIR_SRC)ft_putstr_fd.c $(DIR_SRC)ft_putendl_fd.c $(DIR_SRC)ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
SRCS_BONUS = $(DIR_SRC)ft_lstnew.c $(DIR_SRC)ft_lstadd_front.c $(DIR_SRC)ft_lstsize.c $(DIR_SRC)ft_lstlast.c $(DIR_SRC)ft_lstadd_back.c \
	     $(DIR_SRC)ft_lstdelone.c $(DIR_SRC)ft_lstclear.c $(DIR_SRC)ft_lstiter.c $(DIR_SRC)ft_lstmap.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)
%.o: %.c
	$(CC) $(CFLAGS) -c -I $(DIR_INCLUDE) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
