/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:45:32 by arudy             #+#    #+#             */
/*   Updated: 2021/11/17 16:50:17 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) <= size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// Je sais pas si c'est bon !
// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s1a[10] = "Test1";
// 	char s2a[] = "OK";

// 	printf("%d\n", ft_strlcat(s1a, s2a, 6));
// 	return (0);
// }