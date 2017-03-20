/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:57:50 by bbrunell          #+#    #+#             */
/*   Updated: 2016/07/22 02:12:53 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_iteration(int *keycode, t_struct *p)
{
	if (*keycode == 83)
	{
		if (p->it == 1)
			p->iteration_max = p->iteration_max + 10;
		else
		{
			p->iteration_max = (p->iteration_max < 15) ? 5
			: p->iteration_max - 10;
		}
	}
	else
	{
		if (p->it == 1)
			p->iteration_max = p->iteration_max + 100;
		else
		{
			p->iteration_max = (p->iteration_max < 105) ? 5
			: p->iteration_max - 100;
		}
	}
}

void	ft_moveit(int *keycode, t_struct *p)
{
	if (*keycode == 123)
	{
		p->x2 = p->x2 - ((p->x2 - p->x1) * 0.1);
		p->x1 = p->x1 - ((p->x2 - p->x1) * 0.1);
	}
	else if (*keycode == 124)
	{
		p->x2 = p->x2 + ((p->x2 - p->x1) * 0.1);
		p->x1 = p->x1 + ((p->x2 - p->x1) * 0.1);
	}
	else if (*keycode == 125)
	{
		p->y1 = p->y1 + ((p->y2 - p->y1) * 0.1);
		p->y2 = p->y2 + ((p->y2 - p->y1) * 0.1);
	}
	else if (*keycode == 126)
	{
		p->y1 = p->y1 - ((p->y2 - p->y1) * 0.1);
		p->y2 = p->y2 - ((p->y2 - p->y1) * 0.1);
	}
}

void	keyinit(int *keycode, t_struct *p)
{
	if (*keycode == 18)
		init_julia(p);
	else if (*keycode == 19)
		init_mandel(p);
	else if (*keycode == 20)
		init_jolo(p);
	else if (*keycode == 21)
		init_burning(p);
	else if (*keycode == 22)
		init_multibrot5(p);
	else if (*keycode == 23)
		init_multibrot3(p);
	else if (*keycode == 26)
		init_otherfrac(p);
	else if (*keycode == 28)
		init_carpet(p);
}

int		key_hook(int keycode, t_struct *p)
{
	(keycode == 49) ? ft_restart(p) : 1;
	(keycode == 53) ? exit(0) : 1;
	if (keycode >= 123 && keycode <= 126 &&
	ft_strcmp("Carpet", p->av) != 0)
		ft_moveit(&keycode, p);
	else if ((keycode == 69 || keycode == 78) &&
	(ft_strcmp("Carpet", p->av) != 0))
		p->it = (keycode == 69) ? 1 : -1;
	else if (keycode == 69)
		p->iteration_max = (p->iteration_max < 8) ? p->iteration_max + 1
	: p->iteration_max;
	else if (keycode == 78)
		p->iteration_max = (p->iteration_max > 1) ? p->iteration_max - 1
	: p->iteration_max;
	else if ((keycode == 83 || keycode == 84) &&
	(ft_strcmp("Carpet", p->av) != 0))
		ft_iteration(&keycode, p);
	else if ((keycode >= 18 && keycode <= 23) || keycode == 26 || keycode == 28)
		keyinit(&keycode, p);
	else if (keycode == 1)
		p->move = (p->move == 0) ? 1 : 0;
	else if (keycode == 6)
		p->zoom = (p->zoom == 1) ? 0 : 1;
	expose_hook(p);
	return (0);
}
