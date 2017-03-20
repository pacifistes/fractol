/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:01:26 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/23 13:12:14 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include <mlx.h>
# include <math.h>
# include <pthread.h>

# define SIZE 900
# define MT 36
# define THE struct s_struct

typedef struct		s_thread
{
	int				nb;
	int				lim[4];
	THE				*s;
}					t_thread;

typedef struct		s_struct
{
	void			*mlx;
	void			*win;
	void			*win2;
	long double		x1;
	long double		x2;
	long double		y1;
	long double		y2;
	int				iteration_max;
	long double		c_r;
	long double		c_i;
	long double		z_r;
	long double		z_i;
	int				posx;
	int				posy;
	char			*av;
	int				move;
	int				it;
	int				bpp;
	char			*data;
	void			*img;
	int				size_l;
	int				endian;
	int				zoom;
	t_thread		t[MT];
}					t_struct;

typedef struct		s_complex
{
	long double		c_r;
	long double		c_i;
	long double		z_r;
	long double		z_i;
	long double		tmp;
	int				i;
	int				x;
	int				y;
}					t_complex;

typedef struct		s_carpet
{
	double			x;
	double			y;
	double			cote;
	int				iteca;
}					t_carpet;

void				img_pixel_put(t_struct *img, int x, int y, size_t color);
void				what_fractol(t_struct *s, pthread_t *p);
void				*draw_mandel(void *z);
void				*draw_julia(void *z);
void				*draw_fractol(void *z);
int					ft_begin(int argc, char **argv, t_struct *p);
int					ft_error();
int					expose_hook(t_struct *p);
int					mouse_hook(int button, int x, int y, t_struct *p);
void				ft_restart(t_struct *p);
int					key_hook(int keycode, t_struct *p);
int					motion_mouse_hook(int x, int y, t_struct *p);
int					init_julia(t_struct *p);
int					init_mandel(t_struct *p);
int					init_jolo(t_struct *p);
void				*draw_jolo(void *z);
void				*draw_burning(void *z);
int					init_burning(t_struct *p);
void				*draw_multibrot3(void *z);
int					init_multibrot3(t_struct *p);
void				*draw_multibrot5(void *z);
int					init_multibrot5(t_struct *p);
void				*draw_otherfrac(void *z);
int					init_otherfrac(t_struct *p);
void				write_list(t_struct *p);
void				center_zoom(int button, int x, int y, t_struct *p);
void				normal_zoom(int button, int x, int y, t_struct *p);
int					toi(int i);
int					loi(int i);
int					purple(int i);
int					yellow(int i);
int					cyan(int i);
void				draw_carpet(t_struct *p);
int					init_carpet(t_struct *p);

#endif
