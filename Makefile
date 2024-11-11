OUT = final.out
CFLAGS = -Werror -Wall -Wextra
CC = gcc 

CFILES = ft_printf.c ft_printf_s.c ft_printf_specifier.c ft_printf_c.c \
			ft_printf_i.c ft_printf_x.c


LIBFT_DIR = libft
OBJ_DIR = srcs
INC_DIR = includes

LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I$(LIBFT_DIR)

OBJECTS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(CFILES))
DEPS = $(OBJECTS:.o=.d)
HEADERS = ft_printf.h

all: $(LIBFT) $(OUT)

run: all
	@./$(OUT)

c_run: all
	@$(MAKE) clean
	@./$(OUT)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OUT): $(OBJECTS) $(LIBFT)
	@$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(LIBFT)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(INCLUDES) -MMD -MP -c $(CFLAGS) $< -o $@

-include $(DEPS)

clean:
	@rm -f $(OBJECTS) $(DEPS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(OUT)
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) fclean

re : fclean all