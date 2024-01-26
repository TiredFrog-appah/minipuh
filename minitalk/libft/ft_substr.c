/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:10:38 by achbira           #+#    #+#             */
/*   Updated: 2023/11/18 09:09:15 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	sub = (char *)ft_calloc(len + 1, 1);
	if (!sub)
		return (0);
	if (ft_strlen(s) >= start)
		ft_strlcpy(sub, (char *)(s + start), len + 1);
	return (sub);
}
