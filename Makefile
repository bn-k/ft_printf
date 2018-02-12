.PHONY: clean $(NAME) re fclean all
.SILENT:


# comp
TEST = test
CC = clang
CCFLAGS = -Werror -Wextra -Wall #-fsanitize=adress -g

# dir
D_SRC = srcs
D_INC = includes
D_OBJ = objs
D_LIB = libft

# sources
L_LIB = libft
L_FLAG = -lft
SRC =\
     ft_printf.c \
     test_1.c \
     main.c \
     split.c \
     types.c \

# other 
L_OTHER = other
L_JNEDERLO = -ljnederlo

# special chars

LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

SRCS = $(addprefix $(D_SRC)/, $(SRC))
OBJS = $(addprefix $(D_OBJ)/, $(addsuffix .o, $(basename $(SRC))))
F_INC = $(addsuffix $(D_INC), $(basename -I))
OBJS_DIRS = $(sort $(dir $(OBJS)))

all: $(TEST)

1: all
	./$(TEST) 1
2: all
	./$(TEST) 2
	
$(TEST): build $(OBJS)
	$(CC) -o $(TEST) $(FLAGS) $(F_INC) -L$(L_OTHER) -L$(L_LIB) $(L_FLAG) $(L_JNEDERLO) $(OBJS)
	echo "$(LOG_CLEAR)Create obj $(LOG_CYAN)$(LOG_NOCOLOR)$(LOG_UP)"
	echo "$(LOG_BLACK)$(LOG_GREEN)Compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
	echo "$(LOG_RED)Testing ... $(LOG_RED)$(LOG_NOCOLOR)"
	./$(TEST)

build:
	mkdir -p $(D_OBJ)
	mkdir -p $(OBJS_DIRS)

clean:
	rm -Rf $(OBJS_DIRS)

fclean: clean
	rm -f $(TEST)

re: fclean all

$(D_OBJ)/%.o: $(D_SRC)/%.c
	echo "$(LOG_NOCOLOR)Create obj $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(F_INC) $(FLAGS)
