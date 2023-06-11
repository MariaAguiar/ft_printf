NAME := libftprintf.a
INCLUDE = include
LIBFT = libft
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_printf.c ft_putnbr_base.c\

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	rm -rf libftprintf.a
	rm -rf libft/libft.a

re: fclean all

.PHONY: all clean fclean re
