FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
SRC_PATH = $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_putchar.c $(SRC_DIR)main.c $(SRC_DIR)ft_argc.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEADER_DIR) $(SRC_PATH) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all
