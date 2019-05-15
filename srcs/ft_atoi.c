/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 13:06:00 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/15 15:25:21 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		a;
	int		neg;
	int		i;

	a = 0;
	neg = 1;
	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && ft_ispace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	return (a * neg);
}
