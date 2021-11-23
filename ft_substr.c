/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:14:08 by arudy             #+#    #+#             */
/*   Updated: 2021/11/23 11:01:14 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	malloc_size(char const *s, unsigned int start, size_t len)
{
	int	size;

	size = 0;
	while (s[start] && size <= (int)len)
	{
		size++;
		start++;
	}
	return (size - 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	size;
	char			*dst;

	if (!s)
		return (NULL);
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