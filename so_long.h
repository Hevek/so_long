/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:49:09 by restevez          #+#    #+#             */
/*   Updated: 2025/04/19 00:50:21 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
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

typedef struct s_map		t_map;
struct s_map
{
	size_t	height;
	size_t	width;
	t_pos	exit;
	t_pos	*collectibles;
	t_pos	player;
	t_pos	*walls;
	t_pos	*floor;
};

typedef struct s_position	t_pos;
struct s_position
{
	size_t	x;
	size_t	y;
};

#endif
