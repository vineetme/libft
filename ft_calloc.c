/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vineet <vineet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:23:42 by vineet            #+#    #+#             */
/*   Updated: 2026/05/10 17:23:46 by vineet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
