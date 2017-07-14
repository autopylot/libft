/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:25:29 by wlin              #+#    #+#             */
/*   Updated: 2017/07/14 10:28:55 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char				*ft_itoa_base(int n, int base)
{
	const char		*b_value;
	long 			tmp;
	int				len;
	char			*str;

	b_value = "0123456789ABCDEF";
	tmp = n;
	len = (n < 0) ? 2 : 1;
	n = (n < 0) ? -n : n;
	while (n && len++)
		n /= base;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = '\0';
	if (tmp < 0)
	{
		tmp = -tmp;
		str[0] = '-';
	}
	while (tmp >= base)
	{
		str[--len] = b_value[tmp % base];
		tmp /= base;
	}
	str[--len] = b_value[tmp];
	return (str);
}
