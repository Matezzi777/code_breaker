CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = code_breaker.c \
		code_breaker_utils.c

OBJS = $(SRCS:.c=.o)
BIN = code_breaker

all : $(BIN)

$(BIN): $(OBJS)
	@echo --- Building $@ ---
	$(CC) main.c $^ -o $@

$(OBJS):
	@echo --- Building .o files ---
	$(CC) $(CFLAGS) -c $(SRCS) -I./

fclean: clean
	@echo --- Removing $(BIN) ---
	$(RM) $(BIN)

clean:
	@echo --- Removing .o files ---
	$(RM) *.o

re: fclean all