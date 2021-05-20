SRCS		= ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
			  ft_memmove.c ft_memchr.c ft_memcmp.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra -g
LIBFLAGS	= rc

CC			= gcc ${CFLAGS}
MAKELIB		= ar ${LIBFLAGS}

all: ${NAME}

${NAME}: ${OBJS}
	${MAKELIB} ${NAME} ${OBJS}

.c.o:
	${CC} -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
