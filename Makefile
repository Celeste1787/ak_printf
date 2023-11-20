NAME = libft.a

INCLUDES := include/ft_printf.h

SRCS := c_handler.c \
		d_handler.c \
		ft_draft.c \
		ft_printf.c \
		p_handler.c \
		s_handler.c

SRCS := $(addprefix srcs/, $(SRCS))

OBJS = $(patsubst srcs/%.c,objs/%.o,$(SRCS))

CC := cc
CFLAGS := -Wall -Werror -Wextra

COLORS := $(shell seq 31 37)

all: create_dirs $(NAME)

create_dirs:
	@if [ ! -d "objs" ]; then mkdir objs; fi

objs/%.o: srcs/%.c
	@COLOR_CODE=$$(echo "$(COLORS)" | awk '{srand(); print int(rand()*7)}'); \
		printf "\033[1;%sm\t\tCompiling: $<\033[0m\r" $$((30+COLOR_CODE)); \
		$(CC) $(CFLAGS) -c $< -o $@; \

clean:
	@if [ -d "objs" ]; then rm -rf objs; fi

fclean: clean
	@rm -rf $(NAME)

re: fclean
	@$(MAKE) all

$(NAME): $(OBJS) $(INCLUDES)
	@ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re create_dirs
