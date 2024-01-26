/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 03:11:45 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 14:07:49 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*buh_free(t_list **new, t_list *buh, void *cont, void (*del)(void *))
{
	del(cont);
	ft_lstclear(new, del);
	if (!buh)
		free(buh);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*buh;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	cont = f(lst->content);
	new = ft_lstnew(cont);
	if (!new)
		return (buh_free(NULL, new, cont, del));
	while (lst->next)
	{
		cont = f(lst->next->content);
		buh = ft_lstnew(cont);
		if (!buh)
			return (buh_free(&new, buh, cont, del));
		ft_lstadd_back(&new, buh);
		lst = lst->next;
	}
	return (new);
}
