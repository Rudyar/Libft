/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:14:08 by arudy             #+#    #+#             */
/*   Updated: 2021/11/26 12:27:27 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	malloc_size(char const *s, unsigned int start, size_t len)
{
	int	size;

	size = 0;
	while (s[start] && size < (int)len)
	{
		size++;
		start++;
	}
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dst;

	if (!s)
		return (NULL);
	i = 0;
	size = malloc_size(s, start, len);
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	if (start < size)
	{
		while (s[start] && i < size)
			dst[i++] = s[start++];
	}
	dst[i] = '\0';
	return (dst);
}
