/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:18:18 by wlin              #+#    #+#             */
/*   Updated: 2017/07/12 14:38:04 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup;

	len = (int)ft_strlen((char*)s1);
	if (!(dup = (char*)malloc(sizeof(*dup) * (len + 1))))
		return (NULL);
	dup[len] = '\0';
	while (--len > -1)
		dup[len] = s1[len];
	return (dup);
}
