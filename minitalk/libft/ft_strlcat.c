/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:19 by achbira           #+#    #+#             */
/*   Updated: 2023/11/25 22:47:15 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	d;

	if (!dstsize)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	l = ft_strlen(src);
	if (dstsize <= d)
		return (l + dstsize);
	l += d;
	dstsize -= d;
	while (*src && --dstsize)
		*(dst + d++) = *src++;
	*(dst + d) = '\0';
	return (l);
}
