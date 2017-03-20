/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 12:56:53 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/23 13:00:40 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		init_julia(t_struct *p)
{
	p->x1 = -1.5;
	p->x2 = 1.5;
	p->y1 = -1.2;
	p->y2 = 1.2;
	p->iteration_max = 25;
	p->av = "Julia";
	p->it = 1;
	p->move = 1;
	p->zoom = 1;
	p->c_r = 0;
	p->c_i = 0;
	return (1);
}

int		julia(t_struct *p, t_complex *c)
{
	c->z_r = c->x * (p->x2 - p->x1) / SIZE + p->x1;
	c->z_i = c->y * (p->y2 - p->y1) / SIZE + p->y1;
	return (0);
}

void	algo_julia(t_struct *p, t_complex *c)
{
	c->tmp = c->z_r;
	c->z_r = c->z_r * c->z_r - c->z_i * c->z_i + p->c_r;
	c->z_i = 2 * c->z_i * c->tmp + p->c_i;
	++c->i;
}

void	*draw_julia(void *z)
{
	t_complex	c;
	t_thread	*m;

	c.tmp = 0;
	c.z_r = 0;
	m = (t_thread*)z;
	c.z_i = 0;
	c.x = m->lim[0];
	while (c.x < m->lim[2])
	{
		c.y = m->lim[1];
		while (c.y < m->lim[3])
		{
			c.i = julia(m->s, &c);
			while (c.z_r * c.z_r + c.z_i * c.z_i < 4
					&& c.i < m->s->iteration_max)
				algo_julia(m->s, &c);
			(c.i == m->s->iteration_max) ? img_pixel_put(m->s, c.x, c.y, 0) :
			img_pixel_put(m->s, c.x, c.y, (255 * c.i / m->s->iteration_max));
			c.y++;
		}
		c.x++;
	}
	return (NULL);
}
