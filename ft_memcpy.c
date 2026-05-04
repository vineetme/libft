/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vineet <vineet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 09:30:42 by vineet            #+#    #+#             */
/*   Updated: 2026/05/04 09:30:47 by vineet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s;
	const unsigned char	*l;
	size_t				i;

	if (!dst && !src)
		return (dst);
	s = (unsigned char *)dst;
	l = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s[i] = l[i];
		i++;
	}
	return (dst);
}
