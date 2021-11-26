/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:06:37 by arudy             #+#    #+#             */
/*   Updated: 2021/11/26 17:53:34 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	if (!lst)
		return (NULL);
	i = ft_lstsize(lst);
	j = 1;
	while (j != i)
	{
		j++;
		lst = lst->next;
	}
	return (lst);
}
