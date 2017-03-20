/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 10:31:40 by bbrunell          #+#    #+#             */
/*   Updated: 2016/01/19 11:03:22 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
void				ft_bzero(void *f, size_t i);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putstr(char const *s);
char				*ft_itoa(int n);
#endif
