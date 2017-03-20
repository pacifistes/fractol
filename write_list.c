/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 21:11:27 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/29 21:11:30 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	write_list(t_struct *p)
{
	mlx_string_put(p->mlx, p->win2, 225, 25, 0xFFFFFF, "COMMAND LIST;");
	mlx_string_put(p->mlx, p->win2, 25, 125, 0xFFFFFF, "Swap fractal : '1-8';");
	mlx_string_put(p->mlx, p->win2, 25, 175, 0xFFFFFF,
	"Shifting : directional button;");
	mlx_string_put(p->mlx, p->win2, 25, 225, 0xFFFFFF, "Re_init : 'space';");
	mlx_string_put(p->mlx, p->win2, 25, 275, 0xFFFFFF,
	"Iteration : keynum '1-2'  '+' or '-';");
	mlx_string_put(p->mlx, p->win2, 25, 325, 0xFFFFFF,
	"Stop/Start moose position : 's';");
	mlx_string_put(p->mlx, p->win2, 25, 375, 0xFFFFFF, "Type Zoom : 'z';");
}
