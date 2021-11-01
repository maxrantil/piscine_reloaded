
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
SRC_PATH = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_strcmp.c $(SRC_DIR)ft_strlen.c
O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o
RANLIB = ranlib libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I $(HEADER_DIR) $(SRC_PATH)
	ar rc $(NAME) $(O_FILES)
	$(RANLIB)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
