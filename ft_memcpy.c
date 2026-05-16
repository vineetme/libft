/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeharia <vmeharia@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:38:55 by vmeharia          #+#    #+#             */
/*   Updated: 2026/05/11 19:38:57 by vmeharia         ###   ########.fr       */
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
