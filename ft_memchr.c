/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:21:06 by arudy             #+#    #+#             */
/*   Updated: 2021/11/24 17:02:24 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*dst;

	dst = (char *)s;
	i = 0;
	while (i < n && s)
	{
		if (dst[i] == c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
