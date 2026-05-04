CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJS = 	ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strlen.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o\
		ft_strlcpy.o\

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
