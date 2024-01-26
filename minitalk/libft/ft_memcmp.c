/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:08 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:29:06 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n--)
	{
		if (*(ss1++) != *(ss2++))
			return (*(ss1 - 1) - *(ss2 - 1));
	}
	return (0);
}
