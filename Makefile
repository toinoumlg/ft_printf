NAME = libftprintf.a
CFLAGS = -Werror -Wall -Wextra
CC = gcc 

CFILES = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_printf_s.c $(SRC_DIR)/ft_printf_specifier.c $(SRC_DIR)/ft_printf_c.c \
         $(SRC_DIR)/ft_printf_i.c $(SRC_DIR)/ft_printf_x.c $(SRC_DIR)/ft_put_int.c

SRC_DIR = srcs
LIBFT_DIR = libft
OBJ_DIR = $(SRC_DIR)/obj
INC_DIR = include


LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I$(LIBFT_DIR) -I$(INC_DIR)

OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(CFILES))
DEPS = $(OBJECTS:.o=.d)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	@echo "Extracting objects from libft.a"
	@mkdir -p $(OBJ_DIR)
	@if [ -f $(LIBFT) ]; then cd $(OBJ_DIR) && ar -x ../../$(LIBFT); fi
	ar rcs $@ $(OBJECTS) $(OBJ_DIR)/*.o
	@rm -f $(OBJ_DIR)/*.o

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(INCLUDES) -MMD -MP -c $(CFLAGS) $< -o $@

-include $(DEPS)

clean:
	@rm -f $(OBJECTS) $(DEPS)
	@make -C $(LIBFT_DIR) clean
	@rm -f $(OBJ_DIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re