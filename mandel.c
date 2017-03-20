/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 14:47:31 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/23 14:47:33 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		init_mandel(t_struct *p)
{
	p->x1 = -2.1;
	p->x2 = 1.5;
	p->y1 = -1.5;
	p->y2 = 1.5;
	p->iteration_max = 25;
	p->av = "Mandelbrot";
	p->it = 1;
	p->zoom = 1;
	return (1);
}

int		mandelbrot(t_struct *p, t_complex *c)
{
	c->c_r = c->x * (p->x2 - p->x1) / SIZE + p->x1;
	c->c_i = c->y * (p->y2 - p->y1) / SIZE + p->y1;
	c->z_r = 0;
	c->z_i = 0;
	return (0);
}

void	algo_mandel(t_complex *c)
{
	c->tmp = c->z_r;
	c->z_r = c->z_r * c->z_r - c->z_i * c->z_i + c->c_r;
	c->z_i = 2 * c->z_i * c->tmp + c->c_i;
	++c->i;
}

void	*draw_mandel(void *z)
{
	t_complex	c;
	t_thread	*m;

	c.tmp = 0;
	m = (t_thread*)z;
	c.x = m->lim[0];
	while (c.x < m->lim[2])
	{
		c.y = m->lim[1];
		while (c.y < m->lim[3])
		{
			c.i = mandelbrot(m->s, &c);
			while (c.z_r * c.z_r + c.z_i * c.z_i < 4
					&& c.i < m->s->iteration_max)
				algo_mandel(&c);
			if (c.i == m->s->iteration_max)
				img_pixel_put(m->s, c.x, c.y, 0);
			else
				img_pixel_put(m->s, c.x, c.y, toi((int)(fabsl(fmod(c.i * 20 *
		c.z_i, 999)))));
			c.y++;
		}
		c.x++;
	}
	return (NULL);
}
