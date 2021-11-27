/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:34:54 by arudy             #+#    #+#             */
/*   Updated: 2021/11/27 12:45:11 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if(!new)
		{
			del(new);
			free(new);
			return (NULL);
		}
		f(new);
		lst = lst->next;
		new->next = new;
	}
	return (new);
}