LIBFTPRINTF = libftprintf.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc 
HEADER = include/ft_printf.h

SRCS = ft_printf.c ft_printf_putstr_int.c \
		ft_printf_specifier.c ft_printf_nbr.c

SRC_DIR = src
LIBFT_OBJ_DIR = libft/src/obj/
OBJ_DIR = $(SRC_DIR)/obj
LIBFT_OBJ = $(wildcard $(LIBFT_OBJ_DIR)/*.o)
LIBFT_DIR = libft
OBJECTS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFTPRINTF)

$(LIBFTPRINTF): $(OBJECTS) $(HEADER) $(LIBFT_OBJ_DIR)
	ar rcs $(LIBFTPRINTF) $(OBJECTS) $(LIBFT_OBJ)

$(LIBFT_OBJ_DIR):
	make obj -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(LIBFTPRINTF)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re