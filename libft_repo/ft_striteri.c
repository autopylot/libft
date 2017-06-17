/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:39:32 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 16:44:47 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char *s_ptr;

	s_ptr = s;
	if (s)
	{
		while (*s_ptr != '\0')
		{
			f(s_ptr - s, &*s_ptr);
			s_ptr++;
		}
	}
}
