/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 14:52:08 by wlin              #+#    #+#             */
/*   Updated: 2017/06/16 19:17:08 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;

	if (!lst)
		return (NULL);
	if (!(new_lst = (t_list*)malloc(sizeof(*new_lst))))
		return (NULL);
	new_lst->content = f(new_lst->content);
	new_lst->next = ft_lstmap(new_lst->next, f);
	return (new_lst);
}
