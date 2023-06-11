NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_strlen.c ft_strchr.c\

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf libft.a

re: fclean all

.PHONY: all clean fclean re
