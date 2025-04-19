NAME			= so_long

CC				= cc
CFLAGS			= -g3 -Wall -Wextra -Werror
MLXFLAGS		= libmlx42.a -Iinclude -ldl -lglfw -pthread -lm

SRC_DIR			= ./src
OBJ_DIR			= ./obj
INC_DIR			= ./include
MLX_DIR			= ./MLX42

%.o: %.c
	@$(CC) ${CFLAGS} ${HEADER} -I${MLX_DIR} ${MLXFLAGS} -c $< -o $@

all: ${NAME}

OBJ				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
