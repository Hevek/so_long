/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:49:09 by restevez          #+#    #+#             */
/*   Updated: 2025/04/20 00:04:38 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define FLOOR			'0'
# define WALL			'1'
# define PLAYER			'P'
# define COL			'C'
# define EXIT			'E'
# define TRUE			1
# define FALSE			0
# define TILE_SIZE_MIN	16
# define TILE_SIZE_MAX	64
# define RIGHT			1
# define LEFT 			2

# include "../lib/MLX42/include/MLX42/MLX42.h"
# include "../lib/libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct s_game		t_game;
struct s_game
{
	long	movements;
	int		win;
	int		exit;
	int		player;
	int		collectible;
	int		wall;
	int		floor;
	int		path;
};

typedef struct s_validation	t_validation;
struct s_validation
{
	double	delay;
	int32_t	fd;
	int32_t	column;
	int32_t	line;
	int32_t	move;
	int16_t	coll;
	int16_t	offset_x;
	int16_t	offset_y;
	int8_t	tile_size;
	int8_t	player;
	int8_t	exit;
	int8_t	render;
};

typedef struct s_map		t_map;
struct s_map
{
	t_map	*next;
	t_map	*prev;
	t_map	*up;
	t_map	*down;
	char	chr;
	int8_t	enable;
	int8_t	active;
};

typedef struct s_position	t_pos;
struct s_position
{
	size_t	x;
	size_t	y;
};

typedef struct s_image		t_image;
struct s_image
{
	mlx_image_t		*bg;
	mlx_image_t		*floor;
	mlx_image_t		*wall;
	mlx_image_t		*player;
	mlx_image_t		*exit;
	mlx_image_t		*coll;
	mlx_texture_t	*texture_bg;
	mlx_texture_t	*texture_floor;
	mlx_texture_t	*texture_wall;
	mlx_texture_t	*texture_player;
	mlx_texture_t	*texture_exit;
	mlx_texture_t	*texture_coll;
};

typedef struct s_canvas		t_canvas;
struct s_canvas
{
	mlx_t			*mlx;
	mlx_texture_t	*icon;
	t_image			canvas;
	t_validation	val_data;
	t_map			*map;
	t_map			*player_pos;
	t_map			*exit_pos;
};


#endif
