/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:52:48 by arudy             #+#    #+#             */
/*   Updated: 2021/11/23 15:38:17 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	tmp;

	i = 0;
	while (i < n)
	{
		tmp = ((char *)src)[i];
		((char *)dest)[i] = tmp;
		i++;
	}
	return (dest);
}
