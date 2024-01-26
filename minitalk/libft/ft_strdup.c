/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:00:41 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:53:00 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*puh;

	puh = ft_calloc(ft_strlen(s1) + 1, 1);
	if (!puh)
		return (NULL);
	ft_strlcpy(puh, (char *)s1, ft_strlen(s1) + 1);
	return (puh);
}
