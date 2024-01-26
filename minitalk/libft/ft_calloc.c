/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:56:44 by achbira           #+#    #+#             */
/*   Updated: 2023/12/07 04:56:25 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*puh;
	size_t	i;

	if (count && SIZE_MAX / count < size) // size_max < count * size
		return (NULL);
	puh = malloc(size * count);
	if (!puh)
		return (NULL);
	i = 0;
	while (i < (size * count))
		*((char *)puh + i++) = 0;
	return (puh);
}
