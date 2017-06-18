/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:00:16 by wlin              #+#    #+#             */
/*   Updated: 2017/06/17 19:36:18 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *chr_ptr;

	chr_ptr = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			chr_ptr = (char*)s;
			break ;
		}
		else
			s++;
	}
	if ((unsigned char)c == '\0')
		chr_ptr = (char*)s;
	return (chr_ptr);
}
