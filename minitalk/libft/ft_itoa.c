/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:16:36 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:24:41 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	cnt(int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = cnt(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)ft_calloc(i + 1, 1);
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	if (n < 0)
	{
		*str = '-';
		n = -n;
	}
	while (n)
	{
		str[--i] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
