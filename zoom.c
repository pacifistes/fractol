/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 21:11:45 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/29 21:11:47 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	normal_zoom(int button, int x, int y, t_struct *p)
{
	long double pos_x;
	long double pos_y;

	pos_x = (x * (p->x2 - p->x1) / SIZE + p->x1);
	pos_y = (y * (p->y2 - p->y1) / SIZE + p->y1);
	if (button == 4)
	{
		p->x1 = pos_x - ((pos_x - p->x1) * 2);
		p->x2 = pos_x + ((p->x2 - pos_x) * 2);
		p->y1 = pos_y - ((pos_y - p->y1) * 2);
		p->y2 = pos_y + ((p->y2 - pos_y) * 2);
	}
	if (button == 5 && p->x2 - p->x1 >= 0.00000000000000001)
	{
		p->x1 = pos_x - ((pos_x - p->x1) / 2);
		p->x2 = pos_x + ((p->x2 - pos_x) / 2);
		p->y1 = pos_y - ((pos_y - p->y1) / 2);
		p->y2 = pos_y + ((p->y2 - pos_y) / 2);
	}
}

void	center_zoom(int button, int x, int y, t_struct *p)
{
	long double oldx1;

	oldx1 = p->x1;
	if (button == 1 && p->x2 - p->x1 >= 0.00000000000000001)
	{
		p->x1 = (x * (p->x2 - p->x1) / SIZE + p->x1) - ((p->x2 - p->x1) * 0.25);
		p->x2 = (x * (p->x2 - oldx1) / SIZE + oldx1) + ((p->x2 - oldx1) * 0.25);
		oldx1 = p->y1;
		p->y1 = (y * (p->y2 - p->y1) / SIZE + p->y1) - ((p->y2 - p->y1) * 0.25);
		p->y2 = (y * (p->y2 - oldx1) / SIZE + oldx1) + ((p->y2 - oldx1) * 0.25);
	}
	if (button == 2)
	{
		p->x1 = (x * (p->x2 - p->x1) / SIZE + p->x1) - (p->x2 - p->x1);
		p->x2 = (x * (p->x2 - oldx1) / SIZE + oldx1) + (p->x2 - oldx1);
		oldx1 = p->y1;
		p->y1 = (y * (p->y2 - p->y1) / SIZE + p->y1) - (p->y2 - p->y1);
		p->y2 = (y * (p->y2 - oldx1) / SIZE + oldx1) + (p->y2 - oldx1);
	}
}
