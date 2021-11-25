/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:44:58 by arudy             #+#    #+#             */
/*   Updated: 2021/11/25 13:54:24 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*s2;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (is_in_set(s1[i], set))
		i++;
	while (is_in_set(s1[j], set))
		j--;
	size = j - i;
	s2 = malloc(sizeof(char *) * (size + 1));
	if (!s2)
		return (NULL);
	while (i <= j && s1[i])
	{
		s2[k] = s1[i];
		i++;
		k++;
	}
	s2[k] = '\0';
	return (s2);
}
