/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:05:36 by achbira           #+#    #+#             */
/*   Updated: 2023/11/22 02:15:20 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		nlen;

	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	while (len && *haystack && len >= nlen)
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
