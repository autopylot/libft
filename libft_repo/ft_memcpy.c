/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 11:16:32 by wlin              #+#    #+#             */
/*   Updated: 2017/06/15 12:58:49 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst_ptr;
	unsigned char *src_ptr;

	dst_ptr = (unsigned char*)dst;
	src_ptr = (unsigned char*)src;
	while (n--)
			*dst_ptr++ = *src_ptr++;
	return (dst);
}
