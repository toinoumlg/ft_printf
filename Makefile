NAME = libftprintf.a
TEST = test.out
VALGRIND = valgrind.out
CFLAGS = -Werror -Wall -Wextra
CC = gcc 
VALGRIND_FLAG =  -g -Og


CFILES = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_printf_putstr_int.c \
		$(SRC_DIR)/ft_printf_specifier.c $(SRC_DIR)/ft_printf_nbr.c 

CFILE_MAIN = $(SRC_DIR)/main.c

SRC_DIR = srcs
LIBFT_DIR = libft
OBJ_DIR = $(SRC_DIR)/obj
OBJ_MAIN_DIR =
INC_DIR = include


LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I$(LIBFT_DIR) -I$(INC_DIR)

OBJECTS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(CFILES))
OBJECTS_MAIN = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(CFILES)) \
				$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(CFILE_MAIN))


all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	@mkdir -p $(OBJ_DIR)
	@cd $(OBJ_DIR) && ar -x ../../$(LIBFT)
	@ar rcs $@ $(OBJECTS) $(OBJ_DIR)/*.o
	@rm -f $(OBJ_DIR)/*.o

valgrind: $(VALGRIND)

$(VALGRIND): $(OBJECTS_MAIN) $(LIBFT)
	@$(CC) $(VALGRIND_FLAG) $(INCLUDES)  $(OBJECTS_MAIN) $(LIBFT) -o $@
	valgrind ./$(VALGRIND)

test: $(TEST)

$(TEST): $(OBJECTS_MAIN) $(LIBFT)
	@$(CC) $(INCLUDES)  $(OBJECTS_MAIN) $(LIBFT) -o $@
	./$(TEST)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(INCLUDES) -MMD -MP -c  $< -o $@

clean:
	@rm -f $(OBJECTS) $(DEPS)
	@make -C $(LIBFT_DIR) clean
	@rm -f $(OBJ_DIR)/*.o

fclean: clean
	@rm -f $(NAME) $(VALGRIND) $(TEST)
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re