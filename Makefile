SRC = ft_convert.c ft_countdigits.c ft_fillstr.c ft_printaddr.c ft_printchar.c ft_printf.c ft_printint.c ft_printstr.c ft_printunint.c ft_strlen.c ft_tolower.c

OBJS := $(SRC:%.c=%.o)

NAME = libftprintf.a

cc = gcc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR = .

CPPFLAGS = -I$(INC_DIR)

RM = rm -f

ARNAME = ar rcs $(NAME)

RANNAME = ranlib $(NAME)

all: $(NAME)

$(NAME) : $(OBJS)
	$(ARNAME) $(OBJS)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all