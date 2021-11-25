/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:10:28 by arudy             #+#    #+#             */
/*   Updated: 2021/11/25 13:43:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	count_word(char const *s, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (is_charset(s[i], charset))
		i++;
	while (s && s[i])
	{
		count++;
		while (s[i] && !is_charset(s[i], charset))
			i++;
		while (s[i] && is_charset(s[i], charset))
			i++;
	}
	return (count);
}

static int	word_len(int i, char const *s, char charset)
{
	int	len;

	len = 0;
	while (s[i] && !is_charset(s[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

static char	*ft_mine_strdup(int i, char const *s, char charset)
{
	int		w_len;
	int		j;
	char	*dst;

	w_len = word_len(i, s, charset);
	j = 0;
	dst = malloc(sizeof(char) * (w_len + 1));
	if (!dst)
		return (NULL);
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
	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	if (!is_charset(s[i], c))
		strs[j++] = ft_mine_strdup(i, s, c);
	while (s[i])
	{
		if (is_charset(s[i - 1], c) && !is_charset(s[i], c))
			strs[j++] = ft_mine_strdup(i, s, c);
		i++;
	}
	strs[j] = 0;
	return (strs);
}
