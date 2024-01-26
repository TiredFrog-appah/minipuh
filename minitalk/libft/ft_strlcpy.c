/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:23 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:55:06 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	l = ft_strlen(src);
	i = 0;
	if (!dstsize)
		return (l);
	while (--dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
