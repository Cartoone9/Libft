CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

HDRS = libft.h

SRCS = $(filter-out ./ft_lst%.c, $(wildcard ./ft_*.c))

BONUS = $(wildcard ./ft_lst*.c)

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS) 
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS) 

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
