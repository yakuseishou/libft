/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:10:28 by kchen2            #+#    #+#             */
/*   Updated: 2019/11/15 17:13:06 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dl;
	const char *s;
	size_t	nt;
	char	*d;

	d = dst;
	s = src;
	nt = n;
	while (nt-- != 0 && *d != '\0')
		d++;
	dl = d - dst;
	nt = n - dl;
	if (nt == 0)
		return (dl + ft_strlen(s));
	while (*s != '\0')
	{
		if (nt > 1)
		{
			*d = *s;
			d++;
			nt--;
		}
		s++;
	}
	*d = '\0';
	return (dl + (s - src));
}

// size_t	ft_strlcat(char *dst, const char *src, size_t n)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	a;

// 	i = ft_strlen(dst);
// 	j = ft_strlen(src);
// 	if (n < i)
// 		return (n + j);
// 	a = 0;
// 	while (src[a] && (i + a + 1) < n)
// 	{
// 		dst[i + a] = src[a];
// 		a++;
// 	}
// 	dst[i + a] = 0;
// 	return (i + j);
// }