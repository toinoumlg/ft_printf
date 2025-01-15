LIB_A = libft.a
LIB_BONUS = libft_bonus.a
LIB_SO = libft.so
CFLAGS = -Werror -Wall -Wextra
CC = gcc
CFILES = ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memcmp.c ft_atoi.c \
			ft_strncmp.c ft_toupper.c ft_tolower.c ft_isprint.c ft_isdigit.c \
			ft_isascii.c ft_isalpha.c ft_isalnum.c ft_substr.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_strdup.c ft_itoa.c ft_strmapi.c ft_memset.c ft_memchr.c ft_memcpy.c \
			ft_bzero.c ft_memmove.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c 
CFILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(CFILES:.c=.o)
OBJECTS_BONUS = $(CFILES_BONUS:.c=.o)

all: $(LIB_A)

$(LIB_A): $(OBJECTS)
	ar rcs $@ $^

bonus: $(LIB_A) $(OBJECTS) $(OBJECTS_BONUS)
	ar rcs $(LIB_A) $(OBJECTS) $(OBJECTS_BONUS)

so: $(LIB_SO)

$(LIB_SO): $(OBJECTS) $(OBJECTS_BONUS)
	gcc -shared -o libft.so $(OBJECTS) $(OBJECTS_BONUS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(LIB_A) $(LIB_SO) $(LIB_BONUS)

re : fclean all