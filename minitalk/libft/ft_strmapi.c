/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:41:19 by achbira           #+#    #+#             */
/*   Updated: 2023/11/18 09:04:45 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*puh;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	puh = (char *)ft_calloc(ft_strlen(s) + 1, 1);
	if (!puh)
		return (NULL);
	while (i < ft_strlen(s))
	{
		puh[i] = f(i, s[i]);
		i++;
	}
	return (puh);
}
