/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:04:56 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:26:46 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	int		s;

	s = 1;
	n = 0;
	while (*str && !(*str != ' ' && *str != '\t' && *str != '\n' \
			&& *str != '\v' && *str != '\r' && *str != '\f'))
		str++;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*(str++) == '-')
			s *= -1;
	}
	while (*str && ft_isdigit(*str))
	{
		n *= 10;
		n += *(str++) - '0';
	}
	if (s < 0 && (n * s) > 0)
		return (0);
	else if (s > 0 && (n * s) < 0)
		return (-1);
	return (n * s);
}
