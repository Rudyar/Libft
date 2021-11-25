/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:10:28 by arudy             #+#    #+#             */
/*   Updated: 2021/11/25 18:15:25 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s && s[i])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static int	word_len(int i, char const *s, char c)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_mine_strdup(int i, char const *s, char c, char **strs)
{
	int		w_len;
	int		j;
	char	*dst;

	w_len = word_len(i, s, c);
	j = 0;
	dst = malloc(sizeof(char) * (w_len + 1));
	if (!dst)
	{
		ft_free(strs);
		return (NULL);
	}
	while (j < w_len)
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!strs)
	{
		ft_free(strs);
		return (NULL);
	}
	if (s[i] != c)
		strs[j++] = ft_mine_strdup(i, s, c, strs);
	while (s[i++])
	{
		if (s[i - 1] == c && s[i] != c)
		{
			strs[j++] = ft_mine_strdup(i, s, c, strs);
			if (!strs[j])
				return (NULL);
		}
	}
	if (j == (count_word(s, c) + 1))
		strs[j] = 0;
	return (strs);
}
