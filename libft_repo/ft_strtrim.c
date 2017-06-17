/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:37:50 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 18:22:29 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ws(char c)
{
	if (c == ' ' || c == '\n' || c == ',' || c == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	char *start;
	char *last;

	if (s)
	{
		while (*s && ft_ws(*s))
			s++;
		start = ft_strdup(s);
		if (start)
		{
			last = start + ft_strlen(start) - 1;
			while (last > start && ft_ws(*last))
				*last-- = 0;
			return (start);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
