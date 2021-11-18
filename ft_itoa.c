/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:57:24 by arudy             #+#    #+#             */
/*   Updated: 2021/11/18 18:09:21 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				size;
	unsigned int	nbr;
	char			*dst;
	
	size = 1;
	nbr = n;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		size++;
	}
	if (n < 0)
		size++;
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	nbr = n;
	dst[size] = '\0';
	while (size > 0)
	{
		size--;
		dst[size] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		dst[size] = '-';
	return (dst);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2345));
	return (0);
}