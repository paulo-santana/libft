SRCS	= ft_strlen.c ft_memset.c ft_bzero.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra -g

CC		= gcc ${CFLAGS}

${NAME}: ${SRCS}
	${CC} -c ${SRCS}

all: ${NAME}

clean:
	rm -f ${OBJS}
