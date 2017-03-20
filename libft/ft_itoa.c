/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:34:50 by bbrunell          #+#    #+#             */
/*   Updated: 2015/11/29 10:25:12 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(int n)
{
	int		size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char		*ft_transformation(char *itoa, int n, int size)
{
	int		i;
	int		max;

	max = size + 1;
	i = 0;
	if (n < 0)
	{
		itoa[i] = '-';
		i++;
		n = -n;
	}
	while (n > 9)
	{
		itoa[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	itoa[size] = n + '0';
	itoa[max] = '\0';
	return (itoa);
}

char			*ft_itoa(int n)
{
	char	*itoa;
	int		size;

	if ((unsigned int)n == 0x80000000)
		return ("-2147483648");
	size = ft_size(n);
	itoa = ft_strnew(size);
	if (itoa == NULL)
		return (NULL);
	itoa = ft_transformation(itoa, n, size - 1);
	return (itoa);
}
