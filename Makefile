LIBFTPRINTF = libftprintf.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc 
HEADER = include/ft_printf.h

CFILES = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_printf_putstr_int.c \
		$(SRC_DIR)/ft_printf_specifier.c $(SRC_DIR)/ft_printf_nbr.c

SRC_DIR = srcs
LIBFT_DIR = libft
OBJ_DIR = $(SRC_DIR)/obj
INC_DIR = include

LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I$(LIBFT_DIR) -I$(INC_DIR)

OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(CFILES))

all: $(LIBFTPRINTF)

$(LIBFTPRINTF): $(OBJECTS) $(HEADER) $(LIBFT)
	mkdir -p $(OBJ_DIR)
	cd $(OBJ_DIR) && ar -x ../../$(LIBFT)
	ar rcs $@ $(OBJ_DIR)/*.o
	make -C $(LIBFT_DIR) clean

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIBFTPRINTF)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re