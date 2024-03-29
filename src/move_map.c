/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:04:14 by raguillo          #+#    #+#             */
/*   Updated: 2019/06/18 19:04:17 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void		movemap_para(int keycode, t_build *param)
{
	if (keycode == 123 && param->map.midx - 10 > 15)
		param->move.movex -= 10;
	if (keycode == 124 && param->map.midx + (param->map.taille * param->map.spc)
	+ 10 < 1280)
		param->move.movex += 10;
	if (keycode == 125 && (param->map.taille * param->map.spc) + 10 < 720)
		param->move.movey += 10;
	if (keycode == 126 && param->map.midy - 10 > 10)
		param->move.movey -= 10;
	changeview(param);
}

void		movemap_iso(int keycode, t_build *param)
{
	if (keycode == 123 && param->map.midx - 10 > (param->map.taille *
	param->map.spc) / 2 + 10)
		param->move.movex -= 10;
	if (keycode == 124 && param->map.midx + param->map.taille *
	param->map.spc < 1380)
		param->move.movex += 10;
	if (keycode == 125 && param->map.midy + ((param->map.hauteur *
	param->map.spc) + (param->map.taille * param->map.spc)) / 2 - 10 < 720)
		param->move.movey += 10;
	if (keycode == 126 && param->map.midy - 10 > 0)
		param->move.movey -= 10;
	changeview(param);
}
