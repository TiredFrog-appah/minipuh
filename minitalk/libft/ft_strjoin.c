/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:20:41 by achbira           #+#    #+#             */
/*   Updated: 2023/11/18 06:06:36 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (a + b + 1));
	if (!join)
		return (0);
	ft_strlcpy(join, (char *)s1, a + 1);
	ft_strlcat(join, (char *)s2, a + b + 1);
	return (join);
}
