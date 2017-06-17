/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:39:46 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 17:37:03 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join_str;
	char *join_ptr;

	if (s1 && s2)
	{
		join_str = (char*)malloc((ft_strlen((char*)s1) + ft_strlen((char*)s2)) + 1);
		join_ptr = join_str;
		if (join_str)
		{
			while (*s1 != '\0')
			{
				*join_ptr = *s1;
				join_ptr++;
				s1++;
			}
			while (*s2 != '\0')
			{
				*join_ptr = *s2;
				join_ptr++;
				s2++;
			}
			*join_ptr = '\0';
			return (join_str);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
