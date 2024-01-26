/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 03:02:10 by achbira           #+#    #+#             */
/*   Updated: 2023/11/21 01:12:05 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*puh;

	while (lst && *lst && del)
	{
		puh = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = puh;
	}
}
