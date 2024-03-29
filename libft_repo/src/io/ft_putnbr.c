/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:33:24 by wlin              #+#    #+#             */
/*   Updated: 2017/07/10 14:45:26 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == (-2147483647 - 1))
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putstr("147483648");
		return ;
	}
	else if (n < 0)
		ft_putchar('-');
	n = ft_abs(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
