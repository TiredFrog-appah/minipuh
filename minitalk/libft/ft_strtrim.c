/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:50:52 by achbira           #+#    #+#             */
/*   Updated: 2023/11/19 00:29:13 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	ls;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return ((char *)s1);
	ls = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[ls - 1]) && ls > i)
		ls--;
	s = (char *)malloc(ls - i + 1);
	if (!s)
		return (0);
	ft_strlcpy(s, (char *)s1 + i, ls - i + 1);
	return (s);
}
