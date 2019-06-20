/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:04:03 by raguillo          #+#    #+#             */
/*   Updated: 2019/06/18 19:04:05 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		main(int argc, char **argv)
{
	t_build		param;

	if (argc == 2)
	{
		param.name = argv[1];
		if (parser(&param) == 0)
		{
			ft_putstr("error file\n");
			return (0);
		}
		else
			init_window(&param);
	}
	return (0);
}
