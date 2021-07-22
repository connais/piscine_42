NAME	= do-op

CC		= gcc

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

SRCS 	= calcul.c do-op.c  math.c

.c.o:		$(GCC) $(CFLAGS) -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			clean all
