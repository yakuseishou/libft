/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:48:43 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/20 15:04:35 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!ns)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ns[i] = s2[j];
		i++;
		j++;
	}
	return (ns);
}
