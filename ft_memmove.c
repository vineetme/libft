/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vineet <vineet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:13:19 by vineet            #+#    #+#             */
/*   Updated: 2026/05/04 10:13:23 by vineet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s;
	const unsigned char	*l;
	size_t				i;

	if (!dst && !src)
		return (dst);
	s = (unsigned char *)dst;
	l = (const unsigned char *)src;
	i = 0;
	if (s < l)
	{
		while (i < len)
		{
			s[i] = l[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			s[len] = l[len];
		}
	}
	return (dst);
}
