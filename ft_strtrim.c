/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:50:40 by abdel-ke          #+#    #+#             */
/*   Updated: 2019/11/13 18:13:16 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		check(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	str = ft_strdup(s1);
	if (!str)
		return (NULL);
	j = 0;
	while (check(str[0], (char *)set) == 1)
		str++;
	len = ft_strlen(str) - 1;
	while (len > 0 && check(str[len], (char *)set))
		len--;
	return (ft_substr(str, 0, len + 1));
}
