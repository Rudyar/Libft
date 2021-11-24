/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:11:57 by arudy             #+#    #+#             */
/*   Updated: 2021/11/24 17:32:14 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little)
		return (big);
	while (big && little && big[i] != little[i])
		i++;
	while (big && little && big[i] == little[i])
	{
		if (!little)
			return (big[i - j]);
		i++;
		j++;
	}

}

