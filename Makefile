NAME			= so_long

CC				= cc
CFLAGS			= -g3 -Wall -Wextra -Werror
MLXFLAGS		= -L $(MLX_DIR) -lmlx -lXext -lX11 -lm

SRC_DIR			= ./src
OBJ_DIR			= ./obj
INC_DIR			= ./include
MLX_DIR			= ./minilibx-linux

%.o: %.c
	@$(CC) ${CFLAGS} ${HEADER} -I${MLX_DIR} ${MLXFLAGS} -c $< -o $@

all: ${NAME}

OBJ				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
