/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:24:26 by kchen2            #+#    #+#             */
/*   Updated: 2019/02/21 14:38:31 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	unsigned int	tmp;

	i = ft_numlen(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		i++;
	}
	str = ft_strnew(i);
	if (!str)
		return (0);
	str[--i] = tmp % 10 + '0';
	while (tmp /= 10)
	{
		str[--i] = tmp % 10 + '0';
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
