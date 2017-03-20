/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 14:13:42 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/23 14:13:45 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_struct *p)
{
	int			j;
	pthread_t	s[MT];

	mlx_clear_window(p->mlx, p->win);
	if (p->img)
		ft_bzero(p->data, p->size_l * SIZE);
	what_fractol(p, s);
	j = -1;
	while (++j < MT)
		pthread_join(s[j], NULL);
	mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
	mlx_string_put(p->mlx, p->win, 25, 50, 0xFFFFFF, ft_itoa(p->iteration_max));
	return (0);
}

int		mouse_hook(int button, int x, int y, t_struct *p)
{
	if (ft_strcmp("Carpet", p->av) == 0)
	{
		if (button == 1 || button == 4)
		{
			p->c_r *= 1.1;
			p->z_r += (p->z_r - x) * 0.1;
			p->z_i += (p->z_i - y) * 0.1;
		}
		if (button == 2 || button == 5)
		{
			p->c_r *= 0.9;
			p->z_r -= (p->z_r - x) * 0.1;
			p->z_i -= (p->z_i - y) * 0.1;
		}
	}
	else if (p->zoom == 1 && (button == 4 || button == 5))
		normal_zoom(button, x, y, p);
	else if (p->zoom == 0 && (button == 1 || button == 2))
		center_zoom(button, x, y, p);
	expose_hook(p);
	return (0);
}

int		mouse_motion(int x, int y, t_struct *p)
{
	if ((ft_strcmp("Julia", p->av) == 0 || ft_strcmp("Otherfrac", p->av)
	== 0 || ft_strcmp("Jolo", p->av) == 0) && p->move == 1)
	{
		p->c_r = x * (p->x2 - p->x1) / SIZE + p->x1;
		p->c_i = y * (p->y2 - p->y1) / SIZE + p->y1;
		expose_hook(p);
	}
	return (0);
}

void	init_thread(t_thread *t, t_struct *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = SIZE / sqrt(MT);
	k = SIZE / sqrt(MT);
	while (i < MT)
	{
		t[i].nb = i;
		t[i].lim[0] = i % (int)sqrt(MT) * j;
		t[i].lim[1] = (int)(i / sqrt(MT)) * k;
		t[i].lim[2] = i % (int)sqrt(MT) * j + j;
		t[i].lim[3] = (int)(i / sqrt(MT)) * k + k;
		t[i].s = s;
		++i;
	}
}

int		main(int argc, char **argv)
{
	t_struct	p;

	if (ft_begin(argc, argv, &p) == 1)
	{
		init_thread(p.t, &p);
		p.mlx = mlx_init();
		p.win2 = mlx_new_window(p.mlx, 600, 500, "Command list");
		p.win = mlx_new_window(p.mlx, SIZE, SIZE, argv[1]);
		p.img = mlx_new_image(p.mlx, SIZE, SIZE);
		p.data = mlx_get_data_addr(p.img, &(p.bpp), &p.size_l, &p.endian);
		write_list(&p);
		mlx_expose_hook(p.win, expose_hook, &p);
		mlx_key_hook(p.win, key_hook, &p);
		mlx_mouse_hook(p.win, mouse_hook, &p);
		mlx_hook(p.win, 6, (1L << 6), mouse_motion, &p);
		mlx_loop(p.mlx);
	}
	return (0);
}
