/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:38:42 by wlin              #+#    #+#             */
/*   Updated: 2017/07/13 14:27:22 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

static int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		num;
	int		sign;

	num = 0;
	sign = 1;
	if (!*str || !str)
		return (0);
	while (ft_iswhitespace(*str))
		++str;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '+' ? 1 : -1);
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - '0');
	return (num * sign);
}
