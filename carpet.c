/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carpet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:25:50 by bbrunell          #+#    #+#             */
/*   Updated: 2016/07/20 12:25:54 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		init_carpet(t_struct *p)
{
	p->x1 = 0;
	p->x2 = SIZE;
	p->y1 = 0;
	p->posx = 0;
	p->posy = 0;
	p->y2 = SIZE;
	p->c_r = SIZE / 1.5;
	p->z_r = (SIZE - p->c_r) / 2;
	p->z_i = p->z_r;
	p->iteration_max = 1;
	p->zoom = 1;
	p->av = "Carpet";
	return (1);
}

void	algo_carpet(t_struct *p, t_carpet *c)
{
	double	pos[4];
	int		x;
	int		y;

	c->cote /= 3;
	pos[0] = c->x + (int)c->cote - p->posx;
	pos[1] = c->x + 2 * (int)c->cote - p->posx;
	pos[2] = c->y + (int)c->cote - p->posy;
	pos[3] = c->y + 2 * (int)c->cote - p->posy;
	x = ((int)c->x > 0) ? (int)c->x - 1 - p->posx : -1 - p->posx;
	while (++x < p->x2 && x < c->x + c->cote * 3 && x < SIZE)
	{
		y = ((int)c->y > 0) ? (int)c->y - 1 - p->posy : -1 - p->posy;
		while (++y < p->y2 && y < c->y + c->cote * 3 && y < SIZE)
		{
			if ((x > pos[0] && x < pos[1]) && (y > pos[2] && y < pos[3]) &&
			x > 0 && y > 0)
				img_pixel_put(p, x, y, 0x000000);
			else if (x > 0 && y > 0 && c->iteca == p->iteration_max)
				img_pixel_put(p, x, y, 0xFF0000);
		}
	}
}

void	carpet(t_struct *p, t_carpet c)
{
	if (c.iteca > 0 && c.cote > 3.0)
	{
		algo_carpet(p, &c);
		c.iteca--;
		carpet(p, c);
		c.y += c.cote;
		carpet(p, c);
		c.y += c.cote;
		carpet(p, c);
		c.x += c.cote;
		c.y -= 2 * c.cote;
		carpet(p, c);
		c.y += 2 * c.cote;
		carpet(p, c);
		c.x += c.cote;
		c.y -= 2 * c.cote;
		carpet(p, c);
		c.y += c.cote;
		carpet(p, c);
		c.y += c.cote;
		carpet(p, c);
	}
}

void	draw_carpet(t_struct *p)
{
	t_carpet	c;

	c.x = p->z_r;
	c.y = p->z_i;
	c.cote = p->c_r;
	c.iteca = p->iteration_max;
	carpet(p, c);
}
