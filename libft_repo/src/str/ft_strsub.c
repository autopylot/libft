/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 14:55:10 by wlin              #+#    #+#             */
/*   Updated: 2017/07/13 11:48:11 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (!s)
		return (NULL);
	if (!(sub_str = ft_strnew(len)))
		return (NULL);
	ft_strncpy(sub_str, s + start, len);
	return (sub_str);
}
