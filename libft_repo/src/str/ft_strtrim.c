/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:37:50 by wlin              #+#    #+#             */
/*   Updated: 2017/07/13 11:48:15 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char const *s_end;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		++s;
	if (*s == '\0')
		return (ft_strnew(0));
	s_end = s + ft_strlen((char*)s) - 1;
	while (*s_end == ' ' || *s_end == '\t' || *s_end == '\n')
		s_end--;
	return (ft_strsub(s, 0, s_end - s + 1));
}
