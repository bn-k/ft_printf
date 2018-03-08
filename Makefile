.PHONY: clean $(NAME) re fclean all
.SILENT:


# comp
TEST = test
CC = clang
CCFLAGS =  #-fsanitize=adress -g

# dir
D_SRC = srcs
D_INC = ../libftprintf/includes
D_INC = includes/
D_OBJ = objs
D_LIB = ../libftprintf

# sources
L_LIB = ../libftprintf
L_FLAG = -lftprintf
SRC =\
     main.c \
     test_1.c \
     assert_printf.c \

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


all: libft $(TEST)

libft: 
	make -C ../libftprintf

1: all
	./$(TEST) 1
2: all
	./$(TEST) 2
3: all
	./$(TEST) 3
	
$(TEST): build $(OBJS)
	$(CC) -o $(TEST) $(FLAGS) $(I_INC) $(F_INC) -L$(L_LIB) $(L_FLAG) $(OBJS)
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
