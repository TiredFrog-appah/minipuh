/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:06 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:27:59 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)(s++) == (unsigned char)c)
			return ((unsigned char *)(s - 1));
	}
	return (0);
}
