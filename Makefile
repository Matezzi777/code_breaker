CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c \
		code_breaker.c \
		code_breaker_utils.c

OBJ = $(SRCS:.c=.o)
BIN = code_breaker

all : $(BIN)

$(BIN): $(OBJS)
	@echo ***** Building the program $@ *****
	$(CC) $^ -o $@

$(OBJS):
	@echo ***** Building the .o files *****
	$(CC) $(CFLAGS) -c $(SRC) -o $@

fclean: clean
	@echo ***** Removing the program *****
	$(RM) $(BIN)

clean:
	@echo ***** Removing the .o files *****
	$(RM) *.o

re: fclean all