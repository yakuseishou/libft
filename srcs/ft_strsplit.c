/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:18:29 by kchen2            #+#    #+#             */
/*   Updated: 2019/02/20 17:42:16 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**s2;

	if (!s)
		return (0);
	if (!(s2 = (char **)malloc(sizeof(*s2) * ft_word_count(s, c) + 1)))
		return (0);
	i = -1;
	j = 0;
	while (++i < ft_word_count(s, c))
	{
		k = 0;
		s2[i] = ft_strnew(ft_word_len(&s[j], c) + 1);
		if (!s2[i])
			return (0);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			s2[i][k++] = s[j++];
		s2[i][k] = '\0';
	}
	s2[i] = 0;
	return (s2);
}
