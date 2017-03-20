/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:17:09 by bbrunell          #+#    #+#             */
/*   Updated: 2016/07/20 10:52:37 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_begin(int argc, char **argv, t_struct *p)
{
	if (argc == 2 && ft_strcmp("./fractol", argv[0]) == 0)
	{
		if (ft_strcmp("Julia", argv[1]) == 0)
			return (init_julia(p));
		else if (ft_strcmp("Mandelbrot", argv[1]) == 0)
			return (init_mandel(p));
		else if (ft_strcmp("Jolo", argv[1]) == 0)
			return (init_jolo(p));
		else if (ft_strcmp("Burning", argv[1]) == 0)
			return (init_burning(p));
		else if (ft_strcmp("Multibrot3", argv[1]) == 0)
			return (init_multibrot3(p));
		else if (ft_strcmp("Multibrot5", argv[1]) == 0)
			return (init_multibrot5(p));
		else if (ft_strcmp("Otherfrac", argv[1]) == 0)
			return (init_otherfrac(p));
		else if (ft_strcmp("Carpet", argv[1]) == 0)
			return (init_carpet(p));
	}
	return (ft_error());
}

void	ft_restart(t_struct *p)
{
	if (ft_strcmp("Julia", p->av) == 0)
		init_julia(p);
	else if (ft_strcmp("Mandelbrot", p->av) == 0)
		init_mandel(p);
	else if (ft_strcmp("Jolo", p->av) == 0)
		init_jolo(p);
	else if (ft_strcmp("Burning", p->av) == 0)
		init_burning(p);
	else if (ft_strcmp("Multibrot3", p->av) == 0)
		init_multibrot3(p);
	else if (ft_strcmp("Multibrot5", p->av) == 0)
		init_multibrot5(p);
	else if (ft_strcmp("Otherfrac", p->av) == 0)
		init_otherfrac(p);
	else if (ft_strcmp("Carpet", p->av) == 0)
		init_carpet(p);
}

void	what_fractol(t_struct *z, pthread_t *p)
{
	int i;

	i = -1;
	if (ft_strcmp("Carpet", z->av) == 0)
		draw_carpet(z);
	else
	{
		while (++i < MT)
		{
			if (ft_strcmp("Julia", z->av) == 0)
				pthread_create(&p[i], NULL, draw_julia, &z->t[i]);
			else if (ft_strcmp("Mandelbrot", z->av) == 0)
				pthread_create(&p[i], NULL, draw_mandel, &z->t[i]);
			else if (ft_strcmp("Jolo", z->av) == 0)
				pthread_create(&p[i], NULL, draw_jolo, &z->t[i]);
			else if (ft_strcmp("Burning", z->av) == 0)
				pthread_create(&p[i], NULL, draw_burning, &z->t[i]);
			else if (ft_strcmp("Multibrot3", z->av) == 0)
				pthread_create(&p[i], NULL, draw_multibrot3, &z->t[i]);
			else if (ft_strcmp("Multibrot5", z->av) == 0)
				pthread_create(&p[i], NULL, draw_multibrot5, &z->t[i]);
			else if (ft_strcmp("Otherfrac", z->av) == 0)
				pthread_create(&p[i], NULL, draw_otherfrac, &z->t[i]);
		}
	}
}
