/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:11 by achbira           #+#    #+#             */
/*   Updated: 2023/11/12 19:45:59 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (len && !src && !dst)
		return (dst);
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else 
		ft_memcpy(d, s, len);
	return (dst);
}
