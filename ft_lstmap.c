/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:34:54 by arudy             #+#    #+#             */
/*   Updated: 2021/11/27 18:31:51 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*alst;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		new = ft_lstnew(lst);
		f(new->content);
		if (!new)
		{
			ft_lstclear(&alst, del);
			return (NULL);
		}
		ft_lstadd_back(&alst, new);
		lst = lst->next;
	}
	return (alst);
}
