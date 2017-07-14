/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:32:51 by wlin              #+#    #+#             */
/*   Updated: 2017/07/13 11:53:06 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, char *little)
{
	if (!*big && !*litte)
		return ((char*)big);
	return (ft_strnstr(big, little, ft_strlen((char*)big)));
}
