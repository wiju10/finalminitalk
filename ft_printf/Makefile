NAME	=	libftprintf.a

SOURCES	=	ft_printf.c	ft_putchar.c	ft_putstr.c \
			ft_putint.c ft_putptr.c	ft_putusint.c \
			ft_puthex.c \

OBJECTS	= $(SOURCES:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf



all		:	$(NAME)

$(NAME)	:	$(OBJECTS)
			# make -C libft
			ar rcs $@ $^ $(LIBFT_OBJECTS)

$.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean	:
			$(RM) $(OBJECTS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.phony	:	all clean fclean re libft