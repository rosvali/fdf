/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:01:48 by raguillo          #+#    #+#             */
/*   Updated: 2019/06/18 19:22:34 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <math.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
# include "../lib/libft_rosa/libft.h"
# include "../lib/libft_rosa/get_next_line.h"
# define BUFFER 1280 * 720
# define HEIGHT 720
# define WIDTH 1280

typedef	struct	s_img
{
	void	*img_ptr;
	int		*data;
	int		bpp;
	int		size_l;
	int		endian;
}				t_img;

typedef struct	s_move
{
	int color;
	int proj;
	int movex;
	int movey;
}				t_move;
typedef struct	s_map
{
	int taille;
	int hauteur;
	int midx;
	int midy;
	int sx;
	int sy;
	int grille[BUFFER];
	int spc;
}				t_map;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*mlx_window;
	t_img	img;
}				t_mlx;

typedef struct	s_build
{
	char	*name;
	int		first;
	t_map	map;
	t_move	move;
	t_mlx	graph;
}				t_build;

int				parser(t_build *param);
void			init_window(t_build *param);
void			view(t_build *param);
void			bresenham(int *xy1, int x2, int y2, t_build *param);
void			isometric(int *xy, t_build *param, int i, int j);
void			find_mid_iso(t_build *param);
void			find_mid_para(t_build *param);
int				key_hook(int keycode, t_build *param);
void			cadre1(t_build *param, int x);
void			cadre2(t_build *param, int x);
void			movemap_iso(int keycode, t_build *param);
void			movemap_para(int keycode, t_build *param);
void			changeview(t_build *param);
#endif
