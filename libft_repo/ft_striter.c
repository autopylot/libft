/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 18:41:30 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 16:43:55 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *s_ptr;

	s_ptr = s;
	if (s)
	{
		while (*s_ptr != '\0')
		{
			f(&*s_ptr);
			s_ptr++;
		}
	}
}