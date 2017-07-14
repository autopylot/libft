/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:50:32 by wlin              #+#    #+#             */
/*   Updated: 2017/07/13 13:55:24 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			++words;
			while (*s && *s != c)
				++s;
		}
	}
	return (words);
}

static int		word_length(char const *str, char c)
{
	char	*sptr;

	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;
	int 	len;


	if (!s)
		return (NULL);
	len = count_words(s, c);
	if (!(split = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < len)
	{
		k = 0;
		if (!(str2[i] = ft_strnew(get_word_len(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = NULL;
	return (str2);
}
