NAME		= so_long

CC			= cc
CFLAGS		= -g3 -Wall -Wextra -Werror
MLXFLAGS	= -L $(MLX_DIR) -lmlx -lXext -lX11 -lm

SRC			= ./src
OBJ			= ./obj
INC			= ./include

%.o: %.c
	@$(CC) ${CFLAGS} ${HEADER} -c $< -o $@

all: ${NAME}
