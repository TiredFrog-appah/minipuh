/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achbira <achbira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:10:19 by achbira           #+#    #+#             */
/*   Updated: 2023/12/02 13:51:45 by achbira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	cnt(char const *s, char c)
{
	size_t	i;
	size_t	cn;

	i = 0;
	cn = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cn++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cn);
}

static	char	**puh_free(char **puh)
{
	int	idx;

	idx = 0;
	while (puh[idx]) 
		free(puh[idx++]);
	free(puh);
	return (NULL);
}

char	*koppy(const char *s, size_t j)
{
	char	*puh;

	puh = (char *)ft_calloc(j + 1, 1);
	if (!puh)
		return (NULL);
	ft_strlcpy(puh, s, j + 1);
	return (puh);
}

char	**ft_split(char const *s, char c)
{
	char	**puh;
	size_t	i;
	size_t	j;
	size_t	l;

	if (!s)
		return (NULL);
	l = cnt(s, c);
	i = 0;
	puh = (char **)ft_calloc(l + 1, sizeof(char *));
	if (!puh)
		return (NULL);
	while (i < l)
	{
		j = 0;
		while (s[j] == c && s[j])
			s++;
		while (s[j] != c && s[j])
			j++;
		puh[i] = koppy(s, j);
		if (!puh[i++])
			return (puh_free(puh));
		s += j;
	}
	return (puh);
}
