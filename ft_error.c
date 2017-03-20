/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:37:26 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/23 13:37:28 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_error(void)
{
	ft_putstr("Usage :\n./fractol [name]\n");
	ft_putstr("Name : Julia || Mandelbrot || Jolo || Burning ||");
	ft_putstr(" Multibrot3 || Multibrot5 || Otherfrac || Carpet\n");
	return (0);
}
