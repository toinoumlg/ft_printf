LIBFT = libft.a

CFLAGS = -Werror -Wall -Wextra
CC = gcc

SRCS = ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memcmp.c ft_atoi.c \
			ft_strncmp.c ft_toupper.c ft_tolower.c ft_isprint.c ft_isdigit.c \
			ft_isascii.c ft_isalpha.c ft_isalnum.c ft_substr.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_strdup.c ft_itoa.c ft_strmapi.c ft_memset.c ft_memchr.c ft_memcpy.c \
			ft_bzero.c ft_memmove.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

SRC_DIR = src
OBJ_DIR = $(SRC_DIR)/obj

all: $(LIBFT)

obj: $(OBJ_DIR) $(OBJECTS)

$(LIBFT): $(OBJ_DIR) $(OBJECTS)
	ar rcs $@ $^

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIBFT)

re : fclean all