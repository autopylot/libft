/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:08:33 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 15:25:05 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *s_ptr;

	s_ptr = (char*)s;
	if (!*s)
		return (NULL);
	else if ((unsigned char)c == '\0')
		{
			while (*s_ptr != '\0')
				s_ptr++;
			return (s_ptr);
		}
	else
		{
			while (*s_ptr != '\0')
			{
				s_ptr++;
			}
			while (--s_ptr != '\0')
			{
				if (*s_ptr == (unsigned char)c)
				return (s_ptr);
			}
		}
	return (NULL);
}
