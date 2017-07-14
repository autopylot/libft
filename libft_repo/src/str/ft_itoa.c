/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:13:47 by wlin              #+#    #+#             */
/*   Updated: 2017/07/14 10:18:15 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	const char		*b_value;
	long 			tmp;
	int				len;
	char			*str;

	tmp = n;
	b_value = "0123456789";
	len = (n < 0) ? 2 : 1;
	n = (n < 0) ? -n : n;
	while (n && len++)
		n /= 10;
	if (!(str = ft_strnew(len))
		return (NULL);
	str[--len] = '\0';
	if (tmp < 0)
	{
		tmp = -tmp;
		str[0] = '-';
	}
	while (tmp)
	{
		str[--len] = b_value[tmp % 10];
		tmp /= 10;
	}
	return (str);
}
