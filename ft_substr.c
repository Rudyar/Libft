/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:14:08 by arudy             #+#    #+#             */
/*   Updated: 2021/11/22 15:22:40 by arudy            ###   ########.fr       */
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
	int		i;
	int		size;
	char	*dst;

	size = malloc_size(s, start, len);
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	while (s[start] && i <= size)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main()
{
	printf("%s\n", ft_substr("Salut ca va ?", 4, 6));
	return (0);
}